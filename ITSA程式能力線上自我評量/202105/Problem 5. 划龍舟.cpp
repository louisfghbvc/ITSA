#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
using namespace std;

/**
Read problem statement carefully
4
100 50 120 60 200 50 210 70

6
300 50 100 100 100 100 100 100 
100 100 100 100
**/


void solve(int n){
    cin >> n;
    vector<int> S(n);
    for(int i = 0, p, w; i < n; ++i){
        cin >> p >> w;
        S[i] = p/w;
    }

    // 0 -> first team, 1 -> second team
    int diff = 1e9, mn = 1e9;
    for(int i = 1; i < (1<<n)-1; ++i){
        int first = 0;
        int second = 0, c = 0;
        for(int j = 0; j < n; ++j){
            if(i >> j & 1)
                second += S[j], c++;
            else first += S[j];
        }
        if(abs(first - second) < diff){
            diff = abs(first - second);
            mn = min(c, n-c);
        }
        else if(abs(first - second) == diff){
            mn = min({mn, c, n-c}); 
        }
    }

    cout << diff << "\n" << mn << "\n";
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
