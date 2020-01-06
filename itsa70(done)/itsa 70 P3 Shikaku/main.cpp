#include <iostream>

using namespace std;
const int MAXN = 25;
int arr[MAXN][MAXN];
int main()
{
    int n, m;
    while(cin >> n >> m){
        int cnt = 0;
        for(int i = 1; i <= m; ++i){
            int a = i, b = m/i;
            if(a * b != m)
                continue;
            if(a > n || b > n)
                continue;
            int d1 = max(a, b), d2 = min(a, b);
            if(n < 2 * d1){
                cnt += (n - d1 + 1)*d2;
            }
            else
                cnt += a * b;
        }
        cout << cnt << endl;
    }
    return 0;
}
