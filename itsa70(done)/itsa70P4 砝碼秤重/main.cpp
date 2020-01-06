#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int t, n, m, test;
    cin >> t;
    int dp[200005];
    int arr[205];
    while(t--){
        memset(dp, 0, sizeof dp);
        int cnt = 0, sum = 0;
        cin >> n >> m;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            sum += arr[i];
        }
        dp[0] = 1;
        for(int i = 0; i < n; ++i){
            for(int j = sum; j >= arr[i]; --j){
                if(dp[j-arr[i]])
                    dp[j] = true;
            }
        }

        for(int i = 0; i < m; ++i){
            cin >> test;
            if(dp[test])
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
