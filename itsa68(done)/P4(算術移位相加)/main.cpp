#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
typedef unsigned long long LL;
bool ok(LL num, int len, LL sum){
    LL tmp = 0;
    for(int i = 0; i < len; ++i){
        tmp += num;
        num /= 10;
    }
    if(tmp == sum)
        return true;
    return false;
}
int main()
{
    LL n;
    double div, dtmp;
    while(cin >> n){
        bool found = false;
        int len = log10(n) + 1;
        div = 1;
        dtmp = 0.1;
        for(int i = 1; i < len; ++i){
            div += dtmp;
            dtmp /= 10;
        }
        LL ans = n / div;
        for(int i = -20; i <= 20; ++i){
            if(ok(ans + i, len, n)){
                cout << ans + i << endl;
                found = true;
                break;
            }
        }
        if(!found)
            cout << -1 << endl;
    }
    return 0;
}
