// Top-down. Memorize.
// every state can go to 1, 2, 3.
// if i >= 3
// dp[i] = dp[i-1]+dp[i-2]+dp[i-3]

#include <bits/stdc++.h>
using namespace std;

int dp[35];
int dfs(int x){
    if(x == 0) return 1;
    if(dp[x]) return dp[x];
    int res = 0;
    for(int i = 1; i <= min(x, 3); ++i){
        res += dfs(x-i);
    }
    return dp[x] = res;
}

int main()
{
    int k, x;
    cin >> k;
    memset(dp, 0, sizeof dp);
    dfs(30);
    while(k--){
        cin >> x;
        cout << dp[x] << endl;
    }
    return 0;
}
