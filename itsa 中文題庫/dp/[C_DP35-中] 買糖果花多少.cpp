// unlimit bag problem.
// just put it from small to big.
// if j-arr[i] can put then j can put.

#include <bits/stdc++.h>
#define M 2005
#define N 25
using namespace std;

bool dp[M];
int arr[N];
int main()
{
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    dp[0] = 1;
    for(int i = 0; i < n; ++i){
        for(int j = arr[i]; j <= m; ++j){
            dp[j] |= dp[j-arr[i]];
        }
    }
    int x = m;
    for(; !dp[x]; x--);
    cout << x << endl;
    return 0;
}
/**
50
4
9 15 18 21
**/
