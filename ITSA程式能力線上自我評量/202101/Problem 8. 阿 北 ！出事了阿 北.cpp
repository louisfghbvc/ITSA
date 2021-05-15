#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
using namespace std;
typedef long long LL;

/**
Read problem statement carefully
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
**/

int graph[105][105];
int dis[105];

void solve(int n){
    int a, h, p;
    scanf("%d,%d,%d,%d", &n, &a, &h, &p);
    --a, --h, --p;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; j++)
            cin >> graph[i][j];
    
    queue<tuple<int, int, bool>> q;
    for(int i = 0; i < n; ++i) dis[i] = 1e9;
    q.push({a, 0, a==p});
    dis[a] = 0;

    int gg = 0, tot = 0;
    while(q.size()){
        auto [u, cost, g] = q.front(); q.pop();
        if(cost > dis[u]) continue;
        dis[u] = cost;
        if(u == h){
            gg += g;
            tot++;
            continue;
        }
        for(int v = 0; v < n; ++v){
            if(graph[u][v]){
                q.push({v, cost+1, g | (v == p)});
            }
        }
    }

    int tmp = 1000 * (double)gg / tot;
    printf("%.3f\n", (double)tmp/1000);
}

int main()
{
    // Fast;
    // louisfghbvc
        solve(1);
    return 0;
}

/**
Enjoy the problem.
**/
