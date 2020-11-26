// Just shift. O(N).
// use scanf.

#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; while(t--)
using namespace std;

template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep = ""; for(const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << " end.\n"; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

void solve(){
    int n;
    scanf("%d\n", &n);
    while(n--){
        string s;
        getline(cin, s);
        for(auto &c: s){
            if(isupper(c)) c = ((c-'A')+13)%26 + 'A';
            if(islower(c)) c = ((c-'a')+13)%26 + 'a';
        }
        cout << s << "\n";
    }
}

int main()
{
    //Fast;
    //louisfghbvc
        solve();
    return 0;
}

/**
2
efGH ijKQ23
Uryyb Jbeyq!!
**/
