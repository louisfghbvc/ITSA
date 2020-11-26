// tree dp. O(N).

#include <bits/stdc++.h>  
  
#define louisfghbvc int t; cin >> t; while(t--)  
using namespace std;  
   
void dbg_out() { cerr << " end.\n"; }  
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }  
   
const int N = 1e3+5;  
vector<int> g[N];  
int cost[N];  
int n;  
int dp[N][2];  
   
void dfs(int u, int p = -1){  
    for(int v : g[u]){  
        if(v != p){  
            dfs(v, u);  
            dp[u][1] += dp[v][0];  
            dp[u][0] += max(dp[v][1], dp[v][0]);  
        }  
    }  
    dp[u][1] += cost[u];  
}  
   
void solve(){  
    cin >> n >> cost[1];  
    for(int i = 1; i <= n; ++i) g[i].clear();  
    memset(dp, 0, sizeof dp);  
   
    for(int i = 2; i <= n; ++i){  
        int a;  
        cin >> a >> cost[i];  
        g[a].push_back(i);  
        g[i].push_back(a);  
    }  
   
    dfs(1);  
    cout << max(dp[1][0], dp[1][1]) << "\n";  
}  
   
int main()  
{  
    louisfghbvc
        solve();
    return 0;  
} 
