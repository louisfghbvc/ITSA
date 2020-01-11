#include <bits/stdc++.h>

using namespace std;
int grid[105][105];
bool vis[105][105];
const int dir[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
int t, n, k;
int dfs(int x, int y){
    vis[x][y] = 1;
    int ans = 1;
    for(int k = 0; k < 4; ++k){
        int nx = x + dir[k][0], ny = y + dir[k][1];
        if(nx < 1 || nx > n || ny < 1 || ny > n || vis[nx][ny]) continue;
        ans += dfs(nx, ny);
    }
    return ans;
}
int main()
{

    cin >> t;
    while(t--){
        cin >> n >> k;
        memset(grid, 0, sizeof grid);
        memset(vis, 0, sizeof vis);
        for(int i = 0; i < k; ++i){
            int x, y;
            cin >> x >> y;
            vis[x][y] = grid[x][y] = 1;
        }
        int mex, mey;
        cin >> mex >> mey;
        cout << dfs(mex, mey) << endl;
    }
    return 0;
}
