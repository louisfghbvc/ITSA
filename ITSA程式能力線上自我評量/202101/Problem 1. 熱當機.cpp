#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
using namespace std;
typedef long long LL;

/**
Read problem statement carefully
3
20.3,7
10,1
8,8
**/

void solve(int n){
    double t;
    scanf("%lf,%d", &t, &n);
    for(int i = 0; i <= n; ++i)
        t = t + i*2.71828;
    int tmp = t*10000;
    printf("%.4f\n", (double)tmp/10000);
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
