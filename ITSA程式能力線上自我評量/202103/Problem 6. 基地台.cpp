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
0 0
1 1
**/

int dis(vector<int> &p1, vector<int> &p2){
    int res = 0;
    for(int i = 0; i < 3; ++i){
        res += (p1[i]-p2[i])*(p1[i]-p2[i]);
    }
    return res;
}

void solve(int t){
    int g[10][10] = {
        {1, 7, 4, 0, 9, 4, 8, 8, 2, 4},
        {5, 5, 1, 7, 1, 1, 5, 2, 7, 6},
        {1, 4, 2, 3, 2, 2, 1, 6, 8, 5},
        {7, 6, 1, 8, 9, 2, 7, 9, 5, 4},
        {3, 1, 2, 3, 3, 4, 1, 1, 3, 8},
        {7, 4, 2, 7, 7, 9, 3, 1, 9, 8},
        {6, 5, 0, 2, 8, 6, 0, 2, 4, 8},
        {6, 5, 0, 9, 0, 0, 6, 1, 3, 8},
        {9, 3, 4, 4, 6, 0, 6, 6, 1, 8},
        {4, 9, 6, 3, 7, 8, 8, 2, 9, 1}
    };
    vector< pair<char, vector<int> > > wifi = {
        {'L', {0, 5, g[0][5]}},

        {'A', {1, 1, g[1][1]}},

        {'D', {2, 7, g[2][7]}},

        {'B', {3, 2, g[3][2]}},
        {'C', {3, 4, g[3][4]}},

        {'I', {3, 9, g[3][9]}},

        {'E', {5, 7, g[5][7]}},

        {'H', {6, 4, g[6][4]}},

        {'K', {7, 0, g[7][0]}},

        {'G', {8, 2, g[8][2]}},
        {'F', {8, 7, g[8][6]}},
        {'J', {8, 9, g[8][9]}},
     };
    int x, y;
    cin >> x >> y;
    vector<int> p = {x, y, g[x][y]};
    int d = INT_MAX;
    char mn = '?';
    for(auto &[vv, p2]: wifi){
        if(dis(p, p2) < d){
            d = dis(p, p2);
            mn = vv;
        }
    }
    cout << mn << "\n";
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
