#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
using namespace std;
typedef long long LL;

/**
Read problem statement carefully
3
5
0 5 9 2 1
5 0 8 3 2
9 8 0 5 1
2 3 5 0 1
1 2 1 1 0
3 4
0 2
1 0
**/

int g[105][105];

void solve(int n){
    cin >> n;
    int m;
    cin >> m;

    for(int i = 0; i < m; ++i)
        for(int j = 0; j < m; ++j)
            cin >> g[i][j];

    for(int k = 0; k < m; ++k)
        for(int i = 0; i < m; ++i)
            for(int j = 0; j < m; ++j)
                g[i][j] = min(g[i][j], g[i][k]+g[k][j]);
    
    for(int i = 0, u, v; i < n; ++i){
        cin >> u >> v;
        cout << g[u][v] << "\n";
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
