// Not Ac... equal and not equal
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double W, w1, w2, w3, p1, p2, p3;
    while(cin >> W >> w1 >> w2 >> w3 >> p1 >> p2 >> p3){
        int a = 0, b = 0, c = 0;
        double mx_p = 0.0;
        for(int i = 0; i <= 100; ++i){
            for(int j = 0; j <= 100; ++j){
                for(int k = 0; k <= 100; ++k){
                    double tw = (double)i*w1+(double)j*w2+(double)k*w3;
                    double gain = (double)i*p1+(double)j*p2+(double)k*p3;
                    if(tw <= W){
                        if(gain > mx_p){
                            a = i, b = j, c = k;
                            mx_p = gain;
                        }
                    }
                }
            }
        }
        printf("%d %d %d %.3f\n", a, b, c, mx_p);
    }
    return 0;
}
/*
2.2 1.0 1.0 1.0 2.1 1.9 1.8
2.2 1.2 1.2 1.0 2.1 2.4 2.1
*/
