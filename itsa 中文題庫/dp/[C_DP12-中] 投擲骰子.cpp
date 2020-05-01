// Bottom-up
// Like coin dp.
// Just put one by one.
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

LL dp[25][200];
LL pow6[25];

int main()
{
    int n, x;
    memset(dp, 0, sizeof dp);
    dp[0][0] = 1;
    for(int i = 1; i <= 20; ++i){
        for(int j = 1; j <= 6; ++j){
            for(int k = (i-1)+j; k <= 6*(i-1)+j; ++k){
                dp[i][k] += dp[i-1][k-j];
            }
        }
    }
    pow6[0] = 1;
    for(int i = 1; i <= 20; ++i)
        pow6[i] = 6*pow6[i-1];

    cin >> n >> x;
    LL d = pow6[n], u = 0;
    for(int k = x; k <= 6*n; ++k)
        u += dp[n][k];
    LL gcd = __gcd(d, u);
    if(u)
        cout << u/gcd << " / " << d/gcd << endl;
    else
        puts("0");
    return 0;
}
/*
3 9
7 38
20 130
20 56
10 40
*/
