#include <bits/stdc++.h>

using namespace std;
int arr[1005];
int main()
{
    int n, m;
    cin >> n;
    while(n--){
        cin >> m;
        for(int i = 0; i < m; ++i)
            cin >> arr[i];
        sort(arr, arr + m, greater<int>());
        int sum = ceil((double)arr[0] * 0.4), pre = ceil((double)arr[0] * 0.4);
        for(int i = 1; i < m; ++i){
            if(arr[i] == arr[i - 1]){
                sum += ceil(pre);
                continue;
            }
            int p = ceil((double)i / (double)m * 100.0);
            if(p < 11)
                pre = arr[i] * 0.4;
            else if(p < 31)
                pre = arr[i] * 0.3;
            else if(p < 61)
                pre = arr[i] * 0.2;
            else if(p < 81)
                pre = arr[i] * 0.1;
            else
                pre = 0.0;
            sum += ceil(pre);
        }
        cout << sum << "\n";
    }
    return 0;
}
/*
2
3
50000 80000 100000
4
100000 100000 100000 30000
*/
