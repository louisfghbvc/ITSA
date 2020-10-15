// Very Trick !!!..
// Number theory. check target bit is equal, or not go to that bit...

#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
using namespace std;

int m, s, d;
void dfs(int u, int i){
    cout << " " << u;
    if(u == d) return;
    for(int k = 0, j = i-1; k < m; ++k, --j){
        if(j < 0) j += m;
        int v = u^(1<<j);
        if((v&(1<<j)) != (d&(1<<j))) continue;
        dfs(v, j);
        break;
    }
}

void solve(){
    while(cin >> m >> s >> d){
        for(int j = m-1; j >= 0; --j){
            cout << s;
            dfs(s^(1<<j), j);
            cout << "\n";
        }
    }
}

int main()
{
    Fast;
    solve();
    return 0;
}
