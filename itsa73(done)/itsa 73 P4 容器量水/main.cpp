#include <bits/stdc++.h>

using namespace std;
int main()
{
    int m, n, k, t;
    cin >> m;
    while(m--){
        cin >> n >> k;
        int gcd;
        cin >> gcd;
        for(int i = 1; i < n; ++i){
            cin >> t;
            gcd = __gcd(gcd, t);
        }
        cout << (k % gcd == 0 ? "YES" : "NO") << "\n";
    }
    return 0;
}
