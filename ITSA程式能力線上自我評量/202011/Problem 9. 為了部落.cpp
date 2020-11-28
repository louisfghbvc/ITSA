// AC but confused. de morgan not work.
// key point is inside method.

#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; while(t--)
using namespace std;
typedef unsigned long long LL;

template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep = ""; for(const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << " end.\n"; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

int p[205];
int find(int x){
    return p[x] < 0 ? x: p[x] = find(p[x]);
}

bool inside(array<int, 4> a, array<int, 4> b){
    if(a[0] >= b[0] && a[0] <= b[2] && a[1] >= b[1] && a[1] <= b[3]) return true;
    if(a[2] >= b[0] && a[2] <= b[2] && a[1] >= b[1] && a[1] <= b[3]) return true;
    if(a[0] >= b[0] && a[0] <= b[2] && a[3] >= b[1] && a[3] <= b[3]) return true;
    if(a[2] >= b[0] && a[2] <= b[2] && a[3] >= b[1] && a[3] <= b[3]) return true;
    return false;
}

void solve(){
    int n;
    cin >> n;
    memset(p, -1, sizeof p);
    vector<array<int, 4>> arr;
    for(int i = 0; i < n; ++i){
        array<int, 4> tmp;
        for(int k = 0; k < 4; ++k) cin >> tmp[k];
        arr.push_back(tmp);
    }
    int cnt = n;
    for(int i = 0; i < n; ++i){
        for(int j = i+1; j < n; ++j){
            if(inside(arr[i], arr[j]) || inside(arr[j], arr[i])){
                int a = find(i), b = find(j);
                if(a == b) continue;
                p[b] = a;
                cnt--;
            }
        }
    }
    cout << cnt << "\n";
}

int main()
{
    //Fast;
    //louisfghbvc
        solve();
    return 0;
}

/**
5
0 4 3 5
5 5 7 6
3 0 4 1
4 1 5 7
0 0 2 7
**/
