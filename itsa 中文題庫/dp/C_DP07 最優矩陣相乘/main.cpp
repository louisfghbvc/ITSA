#include <iostream>
#include <cstring>
#define N 1005
using namespace std;
int dp[N][N];
int p[N][N];
void print(int i, int j){
    if(i == j)
        cout << "M" << i + 1;
    else{
        int mid = p[i][j];
        cout << '(';
        print(i, mid);
        print(mid + 1, j);
        cout << ')';
    }
}
int main()
{
    int n;
    while(cin >> n){
        int arr[n][2];
        memset(dp, 0x7f, sizeof dp);
        memset(p, 0, sizeof p);

        for(int i = 0; i < n; ++i){
            cin >> arr[i][0] >> arr[i][1];
            dp[i][i] = 0;
        }
        for(int l = 1; l < n; ++l){
            for(int i = 0; i + l < n; ++i){
                int j = i + l;
                for(int k = i; k < j; ++k){
                    if(dp[i][j] > dp[i][k] + dp[k + 1][j] + arr[i][0] * arr[k][1] * arr[j][1]){
                        p[i][j] = k;
                        dp[i][j] = dp[i][k] + dp[k + 1][j] + arr[i][0] * arr[k][1] * arr[j][1];
                    }
                }
            }
        }
        print(0, n - 1);
        cout << endl << dp[0][n - 1] << endl;
    }
    return 0;
}
/**
  0 1 2 3
0 0
1   0
2     0
3       0
4
2 3
3 4
4 2
2 5
3
4 5
5 9
9 6
*/
