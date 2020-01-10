#include <bits/stdc++.h>
#define N 90005
using namespace std;
vector<int> adj[N];
int dfn[N], mx, id;
bool vis[N];
void dfs(int u){
    for(int i = 0; i < adj[u].size(); ++i){
        int v = adj[u][i];
        if(vis[v])
            continue;
        vis[v] = true;
        dfn[v] = dfn[u] + 1;
        if(mx < dfn[v]){
            mx = dfn[v];
            id = v;
        }
        dfs(v);
    }
}
int main()
{
    int k, n;
    cin >> k;
    while(k--){
        cin >> n;
        for(int i = 0; i < n; ++i){
            adj[i].clear();
            vis[i] = false;
        }
        for(int i = 1; i < n; ++i){
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        mx = 0;
        dfn[0] = 0;
        dfs(0);

        memset(vis, 0, sizeof vis);
        mx = 0;
        dfn[id] = 0;
        dfs(id);

        int mid = mx / 2, mid1 = -1;
        if(mx & 1)
            mid1 = mx / 2 + 1;
        for(int i = 0; i < n; ++i){
            if(dfn[i] == mid || dfn[i] == mid1){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
/*
2
5
0 1
1 2
1 3
3 4
15
1 0
2 1
3 1
4 0
5 4
6 4
7 5
8 6
9 7
10 4
11 7
12 5
13 11
14 11
*/
