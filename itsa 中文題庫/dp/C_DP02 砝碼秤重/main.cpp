#include <iostream>
#include <cstring>

using namespace std;
int arr[205];
bool dp[200005];
int main()
{
    int t, n, m, x;
    cin >> t;
    while(t--){
        memset(dp, 0, sizeof dp);
        cin >> n >> m;
        int sum = 0;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            sum += arr[i];
        }
        dp[0] = true;
        for(int i = 0; i < n; ++i){
            for(int j = sum; j >= arr[i]; --j){
                if(dp[j - arr[i]])
                    dp[j] = true;
            }
        }
        int cnt = 0;
        while(m--){
            cin >> x;
            if(dp[x])
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
