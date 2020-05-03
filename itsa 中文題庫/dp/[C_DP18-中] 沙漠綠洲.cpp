// unlimit bag problem.
// O(k*m)
// base 0= 0
// 0x3f is inf.
// cnt is dp, from put it or not put it
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, k, m;
    int arr[105];
    int cnt[10005];
    cin >> t;
    while(t--){
        cin >> k;
        for(int i = 0; i < k; ++i){
            cin >> arr[i];
        }
        cin >> m;
        memset(cnt, 0x3f, sizeof cnt);
        cnt[0] = 0;
        for(int i = 0; i < k; ++i){
            for(int j = arr[i]; j <= m; ++j){
                cnt[j] = min(cnt[j], cnt[j-arr[i]] + 1);
            }
        }
        if(cnt[m] == 0x3f3f3f3f)
            cout << 0 << endl;
        else
            cout << cnt[m] << endl;
    }
    return 0;
}
/*
2
3 2 3 4 5
4 2 4 6 8 21
*/
