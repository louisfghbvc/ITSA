// try to cut all index, add 2 new val: 0 and len, make cost easy to compute.
// base if R-L < 2, means nothing to cut.
// and care cin. timelimit. use scanf.
#include <bits/stdc++.h>
#define N 55
using namespace std;

int arr[N];
int dp[N][N];
int l, n;
int dfs(int L, int R){
    if(R - L < 2) return 0;
    if(dp[L][R] != -1) return dp[L][R];
    int res = INT_MAX;
    for(int i = L+1; i < R; ++i){
        int cost = arr[R]-arr[L];
        res = min(res, cost + dfs(L, i) + dfs(i, R));
    }
    return dp[L][R] = res;
}

int main()
{
    while(scanf("%d", &l) != -1 && l){
        memset(dp, -1, sizeof dp);
        scanf("%d", &n);
        arr[0] = 0;
        for(int i = 1; i <= n; ++i){
            cin >> arr[i];
        }
        arr[n+1] = l;
        printf("The minimum cutting is %d\n", dfs(0, n+1));
    }
    return 0;
}
/**
100
3
25 50 75
10
4
4 5 7 8
0
**/
