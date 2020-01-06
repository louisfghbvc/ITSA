#include <iostream>
#include <cstring>

using namespace std;
int coin[25], n, dp[25];
int main()
{
    for(int i = 0; i < 20; ++i)
        coin[i] = i+1;
    while(cin >> n){
        memset(dp, 0, sizeof dp);
        for(int i = 0; i < n; ++i)
            dp[i] = 1;
        for(int i = 1; i < n; ++i){
            for(int j = 0; j <= n; ++j){
                if(j >= coin[i])
                    dp[j] = max(dp[j], dp[j-coin[i]] + dp[j]);
            }
        }
        cout << dp[n] + 1 << endl;
    }
    return 0;
}
