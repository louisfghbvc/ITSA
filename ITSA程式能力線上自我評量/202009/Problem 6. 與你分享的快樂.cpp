// Boring. and the number of any number should be round to 3 is bullshit.

#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; while(t--)
using namespace std;

template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep = ""; for(const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << " end.\n"; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

void solve(){
    int d, n, j, b;
    cin >> d >> n >> j >> b;
    double dn = n*1000, dj = j*1000, db = b*1000;
    for(int i = 0; i < d; ++i){
        double g1 = dn/2;
        double g2 = dj/2;
        double g3 = db/2;
        dn = g2+g3;
        dj = g1+g3;
        db = g1+g2;
    }
    printf("%.3f %.3f %.3f\n", dn/1000, dj/1000, db/1000);
}

int main()
{
    //Fast;
    louisfghbvc
        solve();
    return 0;
}

/**
2
2 12 16 20
3 20 30 60
**/
