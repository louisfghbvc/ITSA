// BFS, and remember the state. O(N).

#include <bits/stdc++.h>

#define louisfghbvc int t; cin >> t; while(t--)
using namespace std;

void dbg_out() { cerr << " end.\n"; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

struct node{
    int u, d;
    bool isgg;
};

void solve(){
    int n, a, p, b;
    scanf("%d,%d,%d,%d", &n, &a, &p, &b);

    int adj[n+1][n+1];
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            cin >> adj[i][j];

    int dis[n+2];
    memset(dis, 0x3f, sizeof dis);

    double cnt = 0, gg = 0;
    queue<node> q;
    q.push({a, 0, a==b});

    while(q.size()){
        node tmp = q.front(); q.pop();
        int u = tmp.u, d = tmp.d;
        bool isgg = tmp.isgg;

        dis[u] = d;
        if(u == p){
            if(isgg) gg++;
            cnt++;
        }

        for(int v = 1; v <= n; ++v){
            if(adj[u][v]){
                if(d+1 < dis[v]) q.push({v, d+1, isgg|(v==b)});
            }
        }
    }
    printf("%0.3f\n", gg/cnt);
}

int main()
{
    //louisfghbvc{
        solve();
    //}
    return 0;
}
/**
9,1,5,2
0 1 0 1 0 0 0 0 0
1 0 1 0 1 0 0 0 0
0 1 0 0 0 1 0 0 0
1 0 0 0 1 0 1 0 0
0 1 0 1 0 1 0 1 0
0 0 1 0 1 0 0 0 1
0 0 0 1 0 0 0 1 0
0 0 0 0 1 0 1 0 1
0 0 0 0 0 1 0 1 0

9,1,6,2
0 1 0 1 0 0 0 0 0
1 0 1 0 1 0 0 0 0
0 1 0 0 0 1 0 0 0
1 0 0 0 1 0 1 0 0
0 1 0 1 0 1 0 1 0
0 0 1 0 1 0 0 0 1
0 0 0 1 0 0 0 1 0
0 0 0 0 1 0 1 0 1
0 0 0 0 0 1 0 1 0
**/
