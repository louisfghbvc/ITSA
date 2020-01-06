#include <iostream>
#include <sstream>

using namespace std;
char mp[16][16];
int x, y, ex, ey;
int i = 0, j;
bool over;
void dfs(int x, int y){
    if(x == ex && y == ey){
        mp[x][y] = '#';
        over = true;
        return;
    }
    mp[x][y] = '#';
    if( x + 1 < j && mp[x + 1][y] == '0' && !over){
        dfs(x + 1, y);
    }
    if( x - 1 >= 0 && mp[x - 1][y] == '0' && !over){
        dfs(x - 1, y);
    }
    if( y + 1 < j && mp[x][y + 1] == '0' && !over){
        dfs(x, y + 1);
    }
    if( y - 1 >= 0 && mp[x][y - 1] == '0' && !over){
        dfs(x, y - 1);
    }
    if(!over)
        mp[x][y] = '0';
}
int main()
{
    string s;
    while(getline(cin, s)){
        stringstream ss(s);
        j = 0;
        char c;
        while(ss >> c){
            if(c == ' ')
                continue;
            mp[i][j++] = c;
        }
        i++;
    }
    x = y = 1;
    ex = ey = i - 2;
    over = false;
    dfs(x, y);
    for(int k1 = 0; k1 < i; ++k1){
        cout << mp[k1][0];
        for(int k2 = 1; k2 < j; ++k2){
            cout << " " <<mp[k1][k2];
        }
        cout << endl;
    }
    return 0;
}
/**
1 1 1 1 1 1 1 1 1 1 1
1 0 0 0 0 0 0 0 0 0 1
1 1 1 0 1 1 0 1 1 1 1
1 1 1 0 0 1 1 1 1 1 1
1 1 1 1 0 0 0 0 0 0 1
1 1 1 1 1 0 1 1 1 1 1
1 0 0 0 0 0 0 0 0 0 1
1 1 1 0 1 0 1 0 1 1 1
1 1 1 0 1 0 1 0 0 0 1
1 1 1 0 1 0 1 0 1 0 1
1 1 1 1 1 1 1 1 1 1 1
**/
