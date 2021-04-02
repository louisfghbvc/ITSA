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
0 1 0
N A O
**/


void solve(int t){
    int x1, x2, x3;
    char p, q, r;
    cin >> x1 >> x2 >> x3;
    cin >> p >> q >> r;
    int y1 = 0, y2, y3;
    if(p == 'N'){
        y1 = 1^x1;
    }
    else{
        y1 = x1;
    }
    if(q == 'A'){
        y2 = x2 & y1;
    }
    else{
        y2 = x2 | y1;
    }
    if(r == 'A'){
        y3 = x3 & y2;
    }
    else{
        y3 = x3 | y2;
    }
    printf("%d %d %d\n", y1, y2, y3);
}

int main()
{
    //Fast;
    //louisfghbvc
        solve(0);
    return 0;
}

/**
Enjoy the problem.
**/
