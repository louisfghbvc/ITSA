// Solution1. Enumerate all case. O(N^3)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w, p;
    double w1, w2, w3, p1, p2, p3;
    while(cin >> w >> p >> w1 >> w2 >> w3 >> p1 >> p2 >> p3){
        int a = 0, b = 0, c = 0;
        double mx_p = 0.0;
        for(int i = 0; i <= 100; ++i){
            for(int j = 0; j <= 100; ++j){
                for(int k = 0; k <= 100; ++k){
                    double gain = (double)i*p1 + (double)j*p2 + (double)k*p3;
                    double wt = (double)i*w1 + (double)j*w2 + (double)k*w3;
                    if(wt <= w && gain >= p){
                        if(gain > mx_p){
                            mx_p = gain;
                            a = i, b = j, c = k;
                        }
                    }
                }
            }
        }
        double rest = w - (a*w1+b*w2+c*w3);
        if(!(a+b+c)) puts("0");
        else
            printf("%d %d %d %.3f %.3f\n", a, b, c, mx_p, rest);
    }
    return 0;
}
