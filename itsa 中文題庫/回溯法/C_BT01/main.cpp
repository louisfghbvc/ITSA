#include <iostream>
#include <cstring>

using namespace std;
int n, m, h, k, sum;
bool vis[1005][1005];
int dir[][2] = { {1, 2}, {-1, 2}, {2, 1}, {-2, 1}, {1, -2}, {-1, -2}, {2, -1}, {-2, -1} };
void dfs(int x, int y){
    if(x == h && y == k && vis[x][y]){
        sum++;
        return;
    }
    for(int i = 0; i < 8; ++i){
        int a = x + dir[i][0];
        int b = y + dir[i][1];
        if(a >= 0 && a <= m && b >= 0 && b <= n && !vis[a][b]){
            vis[a][b] = true;
            dfs(a, b);
            vis[a][b] = false;
        }
    }
}
int main()
{
    while(cin >> n >> m >> h >> k){
        sum = 0;
        memset(vis, 0, sizeof vis);
        dfs(h, k);
        cout << sum << endl;
    }
    return 0;
}
