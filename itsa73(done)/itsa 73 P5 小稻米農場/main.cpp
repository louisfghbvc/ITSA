#include <bits/stdc++.h>

using namespace std;
int grid[105][105];
bool vis[105][105];
int n, m;
const int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int dfs(int x, int y){
    vis[x][y] = 1;
    int ans = grid[x][y];
    for(int k = 0; k < 4; ++k){
        int nx = x + dir[k][0], ny = y + dir[k][1];
        if(nx >= n || nx < 0 || ny >= m || ny < 0 || vis[nx][ny] || grid[nx][ny] == 0) continue;
        ans += dfs(nx, ny);
    }
    return ans;
}
int main()
{

    cin >> m >> n;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> grid[i][j];
    memset(vis, 0, sizeof vis);
    int cnt = 0, mx = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(grid[i][j] != 0 && !vis[i][j]){
                cnt++;
                mx = max(dfs(i, j), mx);
            }
        }
    }
    cout << cnt << "\n";
    cout << mx << "\n";
    return 0;
}
/*
3 2
0 0 2
3 0 5
*/
