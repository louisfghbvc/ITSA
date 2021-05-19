#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
using namespace std;

/**
Read problem statement carefully
3
5
13
21
**/

int dfs(int n, int k){
    if(n == 0) return 0;
    return (dfs(n-1, k) + k) % n;
}

void solve(int n){
    cin >> n;
    for(int k = n-1; k >= 1; --k){
        if(dfs(n, k) == n-1){
            cout << k << "\n";
            return;
        }
    }
    cout << "impossible\n";
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
