//用凸包, 極角排序, 逆時針走一圈, 在暴力凸包上的點
#include <bits/stdc++.h>    
#define M 7050    
#define N 105    
using namespace std;    
    
struct P{    
    int x, y;    
}p[M * N];    
    
double dis(P a, P b){    
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));    
}    
    
//右手定則>0, oa->ob逆時針    
int cross(P o, P a, P b){    
    return (a.x - o.x) * (b.y - o.y) - (a.y - o.y) * (b.x - o.x);    
}    
    
//極角排序    
bool cmp(P a, P b)    
{    
    int x = cross(p[0],a,b);    
    return x > 0 || (x == 0 && dis(a, p[0]) < dis(b, p[0]));    
}    
    
vector<P> Graham(int n){    
    vector<P> stk(n);    
    int k = 0;    
    for (int i = 0; i < n; i++) {    
        while (k > 1 && (cross(stk[k-2], stk[k-1], p[i])) <= 0)    
            k--;    
        stk[k++] = p[i];    
    }    
    stk.resize(k);    
    return stk;    
}    
    
int main()    
{    
    int n, m;    
    while(cin >> n >> m){    
        int id = 0, md = 0;    
        P mn = {M, M};    
        for(int i = m; i >= 1; --i){    
            for(int j = 1; j <= n; ++j){    
                char x;    
                cin >> x;    
                if(x == '0') continue;    
                p[id++] = {j, i};    
                if(mn.y > p[id - 1].y || (mn.y == p[id - 1].y && mn.x > p[id - 1].x)){    
                    mn = p[id - 1];    
                    md = id - 1;    
                }    
            }    
        }    
    
        swap(p[md], p[0]);    
        sort(p + 1, p + id, cmp);    
    
        vector<P> hull = Graham(id);    
    
        double ans = 0;    
        for(int i = 0; i < hull.size(); ++i){    
            for(int j = i + 1; j < hull.size(); ++j){    
                ans = max(ans, dis(hull[i], hull[j]));    
            }    
        }    
    
        printf("%.0f\n", ans);    
    }    
    return 0;    
} 
