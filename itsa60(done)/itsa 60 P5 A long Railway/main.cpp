#include <iostream>  
#include <algorithm>  
using namespace std;  
  
const int N = 10005;  
const int M = 1005;  
int t, n, m;  
struct par{  
    int a, b;  
    bool operator < (par p2){  
        if(a != p2.a)  
            return a < p2.a;  
        return b > p2.b;  
    }  
}p[M];  
int main()  
{  
  
    cin >> t;  
    while(t--){  
        cin >> n >> m;  
        for(int i = 0; i < m; ++i){  
            cin >> p[i].a;  
        }  
        for(int i = 0; i < m; ++i){  
            cin >> p[i].b;  
        }  
        sort(p, p + m);  
        int st = 0, cnt = 0, l = -1;  
        while(l < m){  
            if(st >= n - 1)  
                break;  
            int maxb = 0, maxi = -1;  
            for(int i = l + 1; i < m && st >= p[i].a; ++i){  
                if(st <= p[i].b){  
                    if(maxb <  p[i].b){  
                        maxb = p[i].b;  
                        maxi = i;  
                    }  
                }  
            }  
            l = maxi;  
            st = p[maxi].b;  
            cnt++;  
            if(maxi == -1)  
                break;  
        }  
        if(st >= n - 1)  
            cout << cnt << endl;  
        else  
            cout << -1 << endl;  
    }  
    return 0;  
} 