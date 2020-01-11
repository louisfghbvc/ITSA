#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, r;
    cin >> l >> r;
    for(int i = l*60; i <= r*60; ++i){
        int h = (i/60)%12, m = i%60;
        double dd = abs(30.0*h + 0.5*m - 6.0*m);
        if(dd > 180.0) dd = 360.0 - dd;
        if(dd >= 88.0 && dd <= 92.0){
            printf("%02d:%02d degree=%.2f\n", i/60, m, dd);
        }
    }
    return 0;
}
