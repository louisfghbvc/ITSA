// fun. python can not pass.

#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; while(t--)
using namespace std;
typedef unsigned long long LL;

template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep = ""; for(const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << " end.\n"; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

void solve(){
    string s;
    vector<string> lt = {"C","C#","D","D#","E","F","F#","G","G#","A","A#","B"};
    cin >> s;
    bool gg = 0;
    if(s.back() == 'm'){
        s.pop_back();
        gg = 1;
    }
    int i = find(lt.begin(), lt.end(), s) - lt.begin();
    cout << s << " " << vector<string>{lt[(i+3)%12], lt[(i+4)%12]}[!gg] << " " << lt[(i+7)%12] << "\n";
}

int main()
{
    //Fast;
    louisfghbvc
        solve();
    return 0;
}
