#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
using namespace std;
typedef long long LL;

/**
Read problem statement carefully
55.39 109.23 48.29 81.59 81.58 
105.53 94.45

**/

void solve(int n){
    vector<double> arr(7);
    for(auto &it: arr) cin >> it;

    double mn = 1e9;
    int mni = 0;
    double profit = 0.0; 
    int ansl = 0, ansr = 0;

    for(int i = 0; i < 7; ++i){
        if(mn > arr[i]){
            mn = arr[i];
            mni = i;
        }
        
        if(arr[i] - mn > profit){
            profit = arr[i] - mn;
            ansl = mni+1;
            ansr = i+1;
        }
    }

    if(profit <= 1e-6){
        cout << "No profit!\n";
    }
    else{
        int tmp = profit * 100;
        printf("Best buy date:%d\n", ansl);
        printf("Best sell date:%d\n", ansr);
        printf("Profit:%.2f\n", 1.0*tmp/100);
    }
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
