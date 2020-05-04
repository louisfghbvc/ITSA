// Think, put it or not it.
// base 0 = 1
#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main()
{
    int t, m;
    LL dp[30005] = {};
    LL coin[] = {1, 5, 10, 25, 50};
    dp[0] = 1;
    for(int i = 0; i < 5; ++i){
        for(int j = coin[i]; j <= 30000; ++j){
            dp[j] = dp[j-coin[i]] + dp[j];
        }
    }
    cin >> t;
    while(t--){
        cin >> m;
        cout << dp[m] << endl;
    }
    return 0;
}
/*
2
17
4
*/
