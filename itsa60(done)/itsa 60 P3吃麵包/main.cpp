#include <iostream>

using namespace std;
const int MN = 100005;

int main()
{
    int s, n, m;
    cin >> s;
    while(s--){
        cin >> n >> m;
        int arr[n];
        for(int i = 0; i < n; ++i)
            cin >> arr[i];
        for(int i = 0; i < m; ++i){
            int a, b;
            cin >> a >> b;
            long long sum = 0;
            for(int i = a - 1; i < b; ++i){
                sum += arr[i];
            }
            cout << sum << endl;
        }
    }
    return 0;
}
