//bad description. value are big.
#include <bits/stdc++.h>  
  
using namespace std;  
  
int main()  
{  
    long double r, n, p;  
    while(cin >> r >> n >> p){  
        double ans = 0.0;  
        r += 1.0;  
        for(int i = 0; i < n; ++i){  
            ans = (ans + p) * r;  
        }  
        cout << (long long)ans << endl;  
    }  
    return 0;  
}
