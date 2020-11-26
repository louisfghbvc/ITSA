// Boring. Observe.

#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; while(t--)
using namespace std;

template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep = ""; for(const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << " end.\n"; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

void solve(){
    int r;
    cin >> r;
    if(r == 1) cout << 6 << "\n";
    else cout << 6 + 8*(r-1) << "\n";
}

int main()
{
    Fast;
    louisfghbvc
        solve();
    return 0;
}
