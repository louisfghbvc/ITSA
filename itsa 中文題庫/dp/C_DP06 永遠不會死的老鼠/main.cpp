#include <iostream>

using namespace std;

int main()
{
    int n;
    int dp[105][2];
    dp[1][0] = dp[1][1] = 1;
    while(cin >> n){
        for(int i = 2; i <= n; ++i){
            dp[i][0] = dp[i - 1][1] + 1;
            dp[i][1] = dp[i - 1][1] + dp[i - 1][0];
        }
        cout << dp[n][1] << " " << dp[n][0] << endl;
    }
    return 0;
}
