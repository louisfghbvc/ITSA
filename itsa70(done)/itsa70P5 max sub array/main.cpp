#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n], tmp = 0, ans = 0;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            tmp += arr[i];
            tmp = max(0, tmp);
            ans = max(ans, tmp);
        }
        cout << ans << endl;
    }
    return 0;
}
