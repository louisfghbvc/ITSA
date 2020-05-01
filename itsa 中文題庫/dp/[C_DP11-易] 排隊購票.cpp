// memorize. dfs
#include <bits/stdc++.h>
using namespace std;

int memo[55][55];
int dfs(int a, int b, int sum){
    if(b == 0 || a == 0) return 1;
    if(memo[a][b]) return memo[a][b];
    int res = 0;
    res += dfs(a-1, b, sum+50);
    if(sum > 0) res += dfs(a, b-1, sum-50);
    return memo[a][b] = res;
}

int main()
{
    int a, b;
    scanf("%d,%d", &a, &b);
    printf("%d\n", dfs(a, b, 0));
    return 0;
}
/*
3,1
3,2
2,2
1,1
4,2
*/
