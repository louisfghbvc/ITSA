// 01 backpack. Enum. O(k*sum)

#include <bits/stdc++.h>
#define N 55
using namespace std;

int arr[N];
int main()
{
    int n, k;
    cin >> n;
    while(n--){
        bool dp[N*10000] = {};
        cin >> k;
        int sum = 0;
        for(int i = 0; i < k; ++i){
            cin >> arr[i];
            sum += arr[i];
        }
        dp[0] = 1;
        for(int i = 0; i < k; ++i){
            for(int j = sum; j >= arr[i]; --j){
                dp[j] |= dp[j-arr[i]];
            }
        }
        int mn = INT_MAX;
        for(int i = 1; i <= sum; ++i){
            if(dp[i]) mn = min(abs(i - (sum-i)), mn);
        }
        cout << mn << endl;
    }
    return 0;
}
/**
3
4
1 3 6 8
5
1 2 4 8 16
6
1 2 3 8 9 10
**/
