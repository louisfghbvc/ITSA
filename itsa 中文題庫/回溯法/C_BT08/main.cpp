#include <iostream>

using namespace std;
int n;
int mp[25][25];
char ans[25][25];
bool over;
void dfs(int x, int y){
    if(x == n - 2 && y == n - 2){
        ans[x][y] = '#';
        over = true;
        return;
    }
    ans[x][y] = '#';
    if(x + 1 < n && ans[x + 1][y] == '0' && !over)
        dfs(x + 1, y);
    if(x - 1 >= 0 && ans[x - 1][y] == '0' && !over)
        dfs(x - 1, y);
    if(y - 1 >= 0 && ans[x][y - 1] == '0' && !over)
        dfs(x, y - 1);
    if(y + 1 < n && ans[x][y + 1] == '0' && !over)
        dfs(x, y + 1);
    if(!over)
        ans[x][y] = '*';
}
int main()
{
    while(cin >> n){
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                cin >> mp[i][j];
                ans[i][j] = mp[i][j] + '0';
            }
        }
        over = false;
        dfs(1, 1);
        for(int i = 0; i < n; ++i){
            cout << ans[i][0];
            for(int j = 1; j < n; ++j){
                cout << " " << ans[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
