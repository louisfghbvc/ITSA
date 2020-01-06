#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
int queen[10];
int n, x, y, ans;
bool canPlaceQ(int k){
    for(int i = 0; i < k; ++i){
        if(queen[i] == queen[k] || abs(k - i) == abs(queen[i] - queen[k]))
            return false;
    }
    return true;
}
void dfs(int k){
    for(int j = 0; j < n; ++j){
        if(k == x){
            queen[k] = y;
            j = n;
        }
        else
            queen[k] = j;
        if(k == n - 1 && canPlaceQ(k)){
            ans++;
            return;
        }
        else if(canPlaceQ(k))
            dfs(k+1);
    }
}
int main()
{
    while(cin >> n >> x >> y){
        memset(queen, 0, sizeof queen);
        ans = 0;
        dfs(0);
        if(ans)
            cout << "YES" << '(' << ans << ")\n";
        else
            cout << "NO\n";
    }
    return 0;
}
