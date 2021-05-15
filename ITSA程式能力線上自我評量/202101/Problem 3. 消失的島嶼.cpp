#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
using namespace std;
typedef long long LL;

/**
Read problem statement carefully
1
9
000000000
000010110
001110110
011110000
001111110
010111110
010011110
011011110
000000000
**/

string g[105];

bool valid(int x, int y, int n){
    // check 8 dir
    for(int dx: {-1, 0, 1}){
        for(int dy : {-1, 0, 1}){
            int nx = x+dx, ny = y+dy;
            if(nx < 0 || nx >= n || ny < 0 || ny >= n || g[nx][ny] == '0') return false;
        }
    }
    return true;
}

void solve(int n){
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> g[i];
    
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cnt += valid(i, j, n);
        }
    }
    cout << cnt << "\n";
}

int main()
{
    // Fast;
    louisfghbvc
        solve(1);
    return 0;
}

/**
Enjoy the problem.
**/
