// 01 bag. Simple.

#include <bits/stdc++.h>
#define N 3005
#define M 30
using namespace std;

int money[M], p[M], dp[N];
int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        cin >> money[i] >> p[i];
    }
    for(int i = 0; i < m; ++i){
        for(int j = n; j >= money[i]; --j){
            dp[j] = max(dp[j], dp[j-money[i]] + money[i]*p[i]);
        }
    }
    cout << dp[n] << endl;
    return 0;
}
/**
3000
5
1200 5
2000 4
900 4
1800 3
1600 2
**/
