#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
using namespace std;
typedef long long LL;
/**
Read problem statement carefully
2
20 20 10 10 10 1500
20 20 10 10 5 4000

**/


void solve(LL n){
    LL m, s, t, h, v;
    cin >> m >> n >> s >> t >> h >> v;

    LL ord = m*n - s*t;
    if(v >= h * ord){ // open
        LL nh = 1.0 * v / (m*n) * 100;
        printf("%.2f\n", 1.0*nh / 100);
    }
    else{
        LL nh = 1.0 * v / ord * 100;
        printf("%.2f\n", 1.0*nh / 100);
    }
}

int main()
{
    // Fast;
    louisfghbvc
        solve(1);
    return 0;
}

/**
Enjoy the problem.
**/
