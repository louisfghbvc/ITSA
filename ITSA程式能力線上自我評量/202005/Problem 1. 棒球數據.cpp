// Just Simple math.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d, e, f;
    cin >> a >> b >> c;
    printf("%.2f\n", (a+b)/c);
    for(int i = 0; i < 9; ++i){
        cin >> a >> b >> c >> d >> e >> f;
        double obp = (a+b+c)/(d+e+b+c);
        double slg = f/d;
        printf("%.3f\n", obp+slg);
    }

    return 0;
}
/**
171 33 138
126 24 5 375 4 209
115 51 8 363 4 210
56 23 2 164 2 88
109 40 2 391 5 173
156 65 9 411 8 283
135 53 9 401 9 260
59 30 6 205 3 107
108 33 11 371 6 166
110 31 11 378 3 203
**/
