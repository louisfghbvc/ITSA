// Top-Down, dfs. 
// From big to small. 
// So Enum. AC
// 3 5 => (1, 2, 2), (1, 1, 3)
// so can observe. absolute increasing.
#include <bits/stdc++.h>  
using namespace std;  
int dfs(int k, int x, int pre){  
    if(k > x) return 0;  
    if(k == 0){  
        if(x != 0) return 0;  
        return 1;  
    }  
    int res = 0;  
    for(int j = min(pre, 6); j >= 1; --j){  
        res += dfs(k-1, x-j, j);  
    }  
    return res;  
}  
  
int main()  
{  
    int k, n;  
  
    while(cin >> k >> n){  
        cout << dfs(k, n, n) << endl;  
    }  
    return 0;  
} 
/**
2 3
3 5
4 7
**/

// Memorize. speed up but no need.
#include <bits/stdc++.h>
using namespace std;

int dp[36][125][8];
int dfs(int k, int x, int pre){
    if(k > x) return 0;
    if(k == 0){
        if(x != 0) return 0;
        return 1;
    }
    if(dp[k][x][pre] != -1) return dp[k][x][pre];
    int res = 0;
    for(int j = min(pre, 6); j >= 1; --j){
        res += dfs(k-1, x-j, j);
    }
    return dp[k][x][pre] = res;
}

int main()
{
    int k, n;
    while(cin >> k >> n){
        memset(dp, -1, sizeof dp);
        cout << dfs(k, n, n) << endl;
    }
    return 0;
}
