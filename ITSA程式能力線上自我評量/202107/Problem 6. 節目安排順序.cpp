#include <bits/stdc++.h>  
 
#define Fast cin.tie(0), ios::sync_with_stdio(0)  
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)  
using namespace std;  
  
/** 
Read problem statement carefully 
1
3 2 2
first generate type.
second each type can permutation
**/  

typedef long long LL;
LL dfs(int x, int y, int z, bool dance = true){
    if(x == 0 && y == 0 && z == 0) return 1LL;
    LL res = 0;
    if(!dance && z) res += dfs(x, y, z-1, 1);
    if(x) res += dfs(x-1, y, z, 0);
    if(y) res += dfs(x, y-1, z, 0);
    return res;
}

LL fac(LL v){
    if(v == 0) return 1LL;
    return v * fac(v-1); 
}

void solve(int n){  
    int x, y, z;
    cin >> x >> y >> z;
    LL fx = fac(x), fy = fac(y), fz = fac(z);
    cout << fx * fy * fz * dfs(x, y, z) << "\n";
}  
  
int main()  
{  
    // Fast;
    louisfghbvc
        solve(1);
    return 0;
}
