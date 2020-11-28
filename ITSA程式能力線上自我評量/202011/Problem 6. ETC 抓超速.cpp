// boring. too simple.
// just map.

#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; while(t--)
using namespace std;
typedef unsigned long long LL;

template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep = ""; for(const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << " end.\n"; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

void solve(){
    int n, t, etc;
    string name;
    cin >> n;
    set<string> gg;
    map<string, map<int, int>> mp;
    for(int i = 0; i < n; ++i){
        cin >> t >> etc >> name;
        if(mp[name].count(etc-1) && t-mp[name][etc-1] <= 2) gg.insert(name);
        mp[name][etc] = t;
    }
    for(auto &s: gg)
        cout << s << "\n";
}

int main()
{
    //Fast;
    //louisfghbvc
        solve();
    return 0;
}
