#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
using namespace std;

/**
Read problem statement carefully
4 5
1 2 3
2 3 4
3 4 5
1 4 10
1 3 12
0

**/


int g[20][20];
int deg[20];

int dp[1<<16];
int n;
int go(int mask){
    if(dp[mask] != -1) return dp[mask];
    int res = 1e9;
    for(int i = 1; i <= n; ++i){
        if(!(mask >> i & 1)) continue;
        for(int j = 1; j <= n; j++){
            if (i == j) continue;
            if (!((mask >> j) & 1)) continue;
            res = min(res, g[i][j] + go(mask ^ (1 << i) ^ (1 << j)));
        }
    }
    return dp[mask] = res;
}

void solve(int x){
    int m;
    while(cin >> n, n){
        memset(g, 0x3f, sizeof g);
        memset(deg, 0, sizeof deg);

        cin >> m;
        int sum = 0;
        for(int i = 0, u, v, l; i < m; ++i){
            cin >> u >> v >> l;
            sum += l;
            g[u][v] = min(g[u][v], l);
            g[v][u] = min(g[v][u], l);
            deg[u]++;
            deg[v]++;
        }

        int mask = 0;
        for(int i = 1; i <= n; ++i){
            if(deg[i] & 1){ // odd
                mask |= 1<<i;
            }
        }

        if(!mask){ // euler circuit
            cout << sum << "\n";
            continue;
        }

        for(int k = 1; k <= n; ++k)
            for(int i = 1; i <= n; ++i)
                for(int j = 1; j <= n; ++j)
                    g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
        
        memset(dp, -1, sizeof dp);
        dp[0] = 0;
        sum += go(mask); // add odd
        cout << sum << "\n";
    }
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
