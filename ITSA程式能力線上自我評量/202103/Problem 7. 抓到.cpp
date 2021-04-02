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
7 6 2 0 9 2 100 3 5 2 7 100
7 6 2 0 9 2 6 3 5 2 7 0
**/
int M, N, X1, Y1, E1, N1, F1, X2, Y2, E2, N2, F2;
int ans;
bool dfs(int cur){
    if(X1 == X2 && Y1 == Y2){
        ans = cur;
        return true;
    }
    if(F1 <= 0 && F2 <= 0) return false;
    if(cur < N1 && F1) Y1++;
    else if(cur < N1+E1 && F1) X1++;
    if(cur < E2 && F2) X2++;
    else if(cur < N2+E2 && F2) Y2++;
    X1 %= M; Y1 %= N;
    X2 %= M; Y2 %= N;
    if(F1) F1--;
    if(F2) F2--;
    return dfs(cur+1);
}

void solve(int t){
    cin >> M >> N >> X1 >> Y1 >> E1 >> N1 >> F1 >> X2 >> Y2 >> E2 >> N2 >> F2;
    bool ok = dfs(0);
    if(!ok) cout << "No\n";
    else{
        cout << "Yes" << " " << ans << "\n";
    }
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
