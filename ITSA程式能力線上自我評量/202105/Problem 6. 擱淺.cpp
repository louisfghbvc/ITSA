#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
using namespace std;

/**
Read problem statement carefully
5
3 5
6 8
4 1
9 2
8 8
**/


void solve(int n){
    cin >> n;
    vector<int> price(n), weight(n);
    for(int i = 0; i < n; ++i)
        cin >> price[i] >> weight[i];
    
    vector<int> dp(21);

    for(int i = 0; i < n; ++i){
        for(int w = 20; w >= weight[i]; --w){
            dp[w] = max(dp[w], dp[w - weight[i]] + price[i]);
        }
    }

    int mx = 0, mxi = 0;
    for(int i = 0; i <= 20; ++i){
        if(dp[i] > mx){
            mx = dp[i];
            mxi = i;
        }
    }
    cout << mx << " " << mxi << "\n";
}

int main()
{
    // Fast;
    // louisfghbvc
        solve(1);
    return 0;
}

/**
Enjoy the problem.
**/
