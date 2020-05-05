// O(k*sum)
// put or not put, 01bag problem.

#include <bits/stdc++.h>
#define N 5005
using namespace std;

int arr[N];

int main()
{
    int t, k;
    cin >> t;
    while(t--){
        cin >> k;
        int sum = 0;
        for(int i = 0; i < k; ++i){
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum & 1) cout << "NO\n";
        else{
            sum /= 2;
            bool dp[sum + 1] = {};
            dp[0] = 1;
            for(int i = 0; i < k; ++i){
                for(int j = sum; j >= arr[i]; --j){
                    dp[j] |= dp[j-arr[i]];
                }
            }
            puts(dp[sum] ? "YES" : "NO");
        }
    }
    return 0;
}
/**
2
3
1 2 3
4
1 1 6 9
**/
