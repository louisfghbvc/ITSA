#include <iostream>
#include <cstring>

using namespace std;
long long  dp[5][105];
int main()
{
    int n, x, y;
    cin >> n;
    while(n--){
        memset(dp, 0, sizeof dp);
        cin >> x >> y;
        dp[0][1] = x;
        for(int i = 2; i <= y; ++i){
            dp[0][i] = dp[2][i - 1] + dp[3][i - 1];
            dp[1][i] = dp[0][i - 1];
            dp[2][i] = dp[1][i - 1];
            dp[3][i] = dp[2][i - 1];
            dp[4][i] = dp[3][i - 1];
        }
        cout << dp[0][y] + dp[1][y] + dp[2][y] + dp[3][y] + dp[4][y] << endl;
    }
    return 0;
}
