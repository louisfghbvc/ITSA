#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
using namespace std;
typedef long long LL;

template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep = ""; for(const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << " end.\n"; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

/**
Read problem statement carefully
3
2
3
10
**/

LL dp[35];

int dfs(int x){
    if(x <= 0) return 1;
    if(dp[x] != -1) return dp[x];
    int res = 0;
    if(x >= 1){
        res += dfs(x-1);
    }
    if(x >= 2){
        res += dfs(x-2);
    }
    if(x >= 3){
        res += dfs(x-3);
    }
    return res;
}

void solve(int t){
    int n;
    cin >> n;
    cout << dfs(n) << "\n";
}

int main()
{
    memset(dp, -1, sizeof dp);
    //Fast;
    louisfghbvc
        solve(tt);
    return 0;
}

/**
Enjoy the problem.
**/
