// O(N^3), Top-Down. Memorize.
// u can get from every item, but can not get from self twice. maintain sum of weight = rem.

#include <bits/stdc++.h>    
#define N 105    
using namespace std;    
  
int k, m;  
int cost[N][N], dp[N][N];  
  
int dfs(int id, int rem){  
    if(rem <= 0 || id >= k) return 0;  
    if(dp[id][rem] != -1) return dp[id][rem];  
    int res = 0;  
    for(int i = rem; i >= 0; --i){  
        for(int ni = id+1; ni <= k; ++ni){  
            res = max(res, cost[id][i] + dfs(ni, rem-i));  
        }  
    }  
    return dp[id][rem]=res;  
}  
  
int main()    
{    
    while(cin >> k >> m){  
        memset(dp, -1, sizeof dp);  
        for(int i = 0; i < k; ++i){  
            for(int j = 1; j <= m; ++j){  
                cin >> cost[i][j];  
            }      
        }  
        cout << dfs(0, m) << endl;  
    }  
    return 0;    
}
