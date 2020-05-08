// Dp, Very impressive. Bottom-up. O(N^3), Very timelimit. N = 500 is really strict. Nice problem.
// Top-Down, timelimit.
// 2 case: 
// 1. is i, j can match dp[i][j] = dp[i-1][j+1] + 1
// 2. whatever can match or not. Enum (i, j) => dp[i][j] = max(dp[i][k]+dp[k][j]) k = i+1 ~ j-1

#include <bits/stdc++.h>
#define N 505
using namespace std;
bool match(char& c1, char &c2){
    if(c1 == '(' && c2 == ')') return 1;
    if(c1 == '[' && c2 == ']') return 1;
    if(c1 == '{' && c2 == '}') return 1;
    return 0;
}

int dp[N][N];
char s[N];
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%s", s);
        memset(dp, 0, sizeof dp);
        int n = strlen(s);
        for(int len = 1; len < n; ++len){
            for(int i = 0; i+len < n; ++i){
                int j = i+len;
                if(match(s[i], s[j])) dp[i][j] = dp[i+1][j-1]+1;
                for(int k = i+1; k < j; ++k)
                    dp[i][j] = max(dp[i][j], dp[i][k]+dp[k][j]);
            }
        }
        printf("%d\n", dp[0][n-1]);
    }
    return 0;
}
/**
3
[{(])}
[(]))
))))((((
**/
/*
int dfs(int l, int r){
    if(l >= r) return 0;
    if(r == l + 1) return match(s[l], s[r]);
    if(memo[l][r] != -1) return memo[l][r];
    if(match(s[l], s[r]))
        memo[l][r] = 1 + dfs(l+1, r-1);
    for(int k = l; k < r; ++k)
        memo[l][r] = max(memo[l][r], dfs(l, k+1)+dfs(k+1, r));
    return memo[l][r];
}*/
