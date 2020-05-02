// enumerate all num.
// dp[i] is minimum coin numbers to get i
// so enum a, b. a is buyer, b is seller.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    int coin[20];
    int dp[205];
    while(cin >> x >> n){
        for(int i = 0; i < n; ++i) cin >> coin[i];
        memset(dp, 0x3f, sizeof dp);
        dp[0] = 0;
        for(int j = 0; j < n; ++j){
            for(int i = coin[j]; i <= 200; ++i){
                dp[i] = min(dp[i-coin[j]]+1, dp[i]);
            }
        }
        int mn = INT_MAX;
        for(int i = 200; i >= x; i--){
            mn = min(mn, dp[i]+dp[i-x]);
        }
        cout << mn << endl;
    }
    return 0;
}
/*
47

2

1 50
*/
