#include <iostream>

using namespace std;
char mp[55][55];
int n, mx, my;
void dfs(int x, int y){
    mx = x;
    my = y;
    mp[x][y] = '0';
    if(y - 1 >= 0 && mp[x][y - 1] == '1'){
        dfs(x, y - 1);
    }
    if(y + 1 < n && mp[x][y + 1] == '1'){
        dfs(x, y + 1);
    }
    if(x + 1 < n && mp[x + 1][y] == '1'){
        dfs(x + 1, y);
    }
    if(x - 1 >= 0 && mp[x - 1][y] == '1'){
        dfs(x - 1, y);
    }
    mp[x][y] = '1';
}
int main()
{

    while(cin >> n){
        int x, y;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                cin >> mp[i][j];
                if(mp[i][j] == 'S'){
                    x = i;
                    y = j;
                }
            }
        }
        dfs(x, y);
        mp[x][y] = 'S';
        mp[mx][my] = '#';
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                cout << mp[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
/**
4
11S0
1001
1011
1111
10

10S0111111

1010001010

1111111010

0000010010

1111010010

1000010000

1011111111

1001000000

1111000001

0001111111
*/
