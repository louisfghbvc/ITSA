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
100 20 5 10
1000 127 7 10
**/

void solve(int t){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for(int c_use = 0; c_use <= b; ++c_use){
        int d_use = b - c_use;
        if(c_use * c + d_use * d == a){
            printf("%d %d\n", c_use, d_use);
            return;
        }
    }

    cout << "???\n";
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
