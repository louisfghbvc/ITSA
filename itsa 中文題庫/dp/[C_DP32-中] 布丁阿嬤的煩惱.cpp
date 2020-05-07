// 01 bag. build table.
// O(N*30)

#include <bits/stdc++.h>
#define N 1005
using namespace std;

int cost[N], weight[N], dp[N];
int main()
{
    int t, n, g, x;
    cin >> t;
    while(t--){
        memset(dp, 0, sizeof dp);
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> cost[i] >> weight[i];
        }
        for(int i = 0; i < n; ++i){
            for(int j = 30; j >= weight[i]; --j){
                dp[j] = max(dp[j], dp[j-weight[i]]+cost[i]);
            }
        }
        cin >> g;
        int sum = 0;
        while(g-- && cin >> x){
            sum += dp[x];
        }
        cout << sum << endl;
    }
    return 0;
}
/**
4
3
72 17
44 23
31 24
1
26
1
100 5
1
25
1
100 10
2
25
20
6
64 26
85 22
52 4
99 18
39 13
54 9
4
23
20
20
26
**/
