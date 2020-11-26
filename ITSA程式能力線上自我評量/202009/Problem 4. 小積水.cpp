// trap water. dp O(N).

#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; while(t--)
using namespace std;

template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep = ""; for(const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << " end.\n"; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &it: arr) cin >> it;

    vector<int> suf(n);
    suf[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; --i) suf[i] = max(suf[i+1], arr[i]);

    int ans = 0, mxl = arr[0];
    for(int i = 1; i+1 < n; ++i){
        ans += max(0, min(mxl, suf[i+1])-arr[i]);
        mxl = max(mxl, arr[i]);
    }
    cout << ans << "\n";
}

int main()
{
    Fast;
    louisfghbvc
        solve();
    return 0;
}

/**
2
7
3 2 1 4 2 3 5
12
4 6 3 1 2 9 8 7 4 6 5 2
**/
