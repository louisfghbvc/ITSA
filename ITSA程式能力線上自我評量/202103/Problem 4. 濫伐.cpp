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
2
10 1
11 4

y x
x = y - y/2 - 1
2*x + 2 = y
**/


void solve(int t){
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; ++i){
        k = 2*k+2;
    }
    cout << k << "\n";
}

int main()
{
    //Fast;
    louisfghbvc
        solve(tt);
    return 0;
}

/**
Enjoy the problem.
**/
