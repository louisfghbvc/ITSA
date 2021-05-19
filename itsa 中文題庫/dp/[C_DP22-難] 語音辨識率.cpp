#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
using namespace std;

/**
Read problem statement carefully
thou-shalt-not
you-should-not
**/

const int N = 1e2+5;
int dp[N][N];


void solve(int n){
    string s, t;
    cin >> s >> t;

    for(int j = 0; j <= t.size(); ++j)
        dp[0][j] = j;
    for(int i = 0; i <= s.size(); ++i)
        dp[i][0] = i;
    
    for(int i = 1; i <= s.size(); ++i){
        for(int j = 1; j <= t.size(); ++j){
            if(s[i-1] == t[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = 1 + min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]});
            }
        }
    }

    int rep = 0, de = 0, in = 0;
    int i = s.size(), j = t.size();
    while(i >= 1 && j >= 1){
        if(s[i-1] == t[j-1]){
            i--; j--;
        }
        else{
            if(dp[i-1][j-1] <= dp[i-1][j] && dp[i-1][j-1] <= dp[i][j-1]){ // replace
                i--; j--;
                rep++;
            }
            else if(dp[i][j-1] <= dp[i-1][j-1] && dp[i][j-1] <= dp[i-1][j]){ // insert
                j--;
                in++;
            }
            else{ // delete
                i--;
                de++;
            }
        }
    }
    // delete
    if(i >= 1) de += i;
    // insert
    if(j >= 1) in += j;
    cout << rep << " " << in << " " << de << "\n"; 
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
