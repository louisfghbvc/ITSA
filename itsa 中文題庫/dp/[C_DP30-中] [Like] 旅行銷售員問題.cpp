// O(N^2), From back to begin dp. because smallest path traversal.
// Be careful, your dp can not replace origin array. 
// Maintain smallest id, if update same path[i][j] again.

#include <bits/stdc++.h>  
using namespace std;  
  
int path[15][105];  
int arr[15][105];  
int dp[15][105];  
  
int main()  
{  
    int n, m;  
    while(cin >> n >> m){  
        memset(path, 0x3f, sizeof path);  
        memset(dp, 0, sizeof dp);  
        for(int i = 0; i < n; ++i){  
            for(int j = 0; j < m; ++j){  
                cin >> arr[i][j];  
                dp[i][j] = arr[i][j];  
            }  
        }  
        for(int j = m-2; j >= 0; --j){  
            for(int i = 0; i < n; ++i){  
                int u, mid, d;  
                u = arr[i][j] + dp[(i-1+n)%n][j+1];  
                mid = arr[i][j] + dp[i][j+1];  
                d = arr[i][j] + dp[(i+1)%n][j+1];  
                if(u <= mid && u <= d){  
                    dp[i][j] = u;  
                    path[i][j] = min(path[i][j], (i-1+n)%n);  
                }  
                if(mid <= u && mid <= d){  
                    dp[i][j] = mid;  
                    path[i][j] = min(path[i][j], i);  
                }  
                if(d <= mid && d <= u){  
                    dp[i][j] = d;  
                    path[i][j] = min(path[i][j], (i+1)%n);  
                }  
            }  
        }  
        int mn = 1e9, mini = n;  
        for(int i = 0; i < n; ++i){  
            if(mn > dp[i][0]){  
                mn = dp[i][0];  
                mini = i;  
            }  
        }  
        cout << mini+1;  
        int next = mini;  
        for(int j = 0; j < m - 1; ++j){  
            cout << " " << path[next][j]+1;  
            next = path[next][j];  
        }  
        cout << endl << dp[mini][0] << endl;  
    }  
    return 0;  
}
