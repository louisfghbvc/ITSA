// if you are dp master. and this problem is very simple.
// Use memorize speed up.
// Easy than other questions.

#include <bits/stdc++.h>  
#define N 255  
using namespace std;    
  
int memo[N][N];  
int A(int m, int n){  
    if(m == 0 || n == 0) return m+n;  
    if(memo[m][n] != -1) return memo[m][n];  
    int res = 0;  
    res += A(m-1, min(A(m/2, n/2), n-1))+A(min(m-1, A(m/4, n/2)), n/2);  
    return memo[m][n] = res;  
}  
int main()    
{    
    int m, n;  
    memset(memo, -1, sizeof memo);  
    cin >> m >> n;  
    cout << A(m, n) << endl;  
    return 0;    
}
