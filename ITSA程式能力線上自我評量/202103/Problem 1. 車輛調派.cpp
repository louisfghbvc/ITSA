#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define All(x) x.begin(), x.end()
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
#define sz(x) (int)(x).size()
#define sort_unique(x) sort(x.begin(), x.end()); x.erase(unique(x.begin(), x.end()));
using namespace std;
typedef long long LL;
typedef pair<LL, LL> ii;
typedef vector<LL> vi;

template<typename T> istream& operator>>(istream &is, vector<T> &v) { for(auto &it : v) is >> it; return is; }
template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep = ""; for(const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

void dbg_out() { cerr << " end.\n"; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

const int N = 2e5+5;
const int INF = 0x3f3f3f3f;
/**
Read problem statement carefully
3
1 5 2 12 7 18
4
3 8 2 9 9 13 4 20
**/

void solve(int t){
    int n;
    cin >> n;
    int fre[30] = {};
    for(int i = 0, s, d; i < n; ++i){
        cin >> s >> d;
        fre[s]++;
        fre[d+1]--;
    }
    int sum = 0, mx = 0;
    for(int i = 0; i < 29; ++i){
        sum += fre[i];
        mx = max(mx, sum);
    }
    cout << mx << "\n";
}

int main()
{
    //Fast;
    //louisfghbvc
        solve(1);
    return 0;
}

/**
Enjoy the problem.
**/
