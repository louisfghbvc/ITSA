#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
using namespace std;
typedef long long LL;

/**
Read problem statement carefully
2
3 2 1 0
4 1 0 3 2
**/

bool vis[15];
int arr[15];

int dfs(int u){
    vis[u] = 1;
    int res = 1;
    if(u != arr[u]){
        if(!vis[arr[u]])
            res += dfs(arr[u]);
    }
    return res;
}

void solve(int n){
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    memset(vis, 0, sizeof vis);


    int res = 0;
    for(int i = 0; i < n; ++i){
        if(!vis[i]){
            res += dfs(i) - 1;
        }
    }
    cout << res << "\n";
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
