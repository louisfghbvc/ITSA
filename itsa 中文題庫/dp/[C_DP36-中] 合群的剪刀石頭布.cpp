// Just dfs, maintain order big to small. record cnt.

#include <bits/stdc++.h>
#define N 505
using namespace std;

int cc[3] = {5, 2, 0};
int cnt[3];
int n, x, y, mx;
int dfs(int id, int sum, int p){
    if(id > x || sum < 0) return 0;
    if(id == x && sum == 0){
        mx = max(mx, *max_element(cnt, cnt+3));
        if(mx < 2) mx = 0;
        return 1;
    }
    int res = 0;
    for(int i = p; i < 3; ++i){
        cnt[i]++;
        res += dfs(id+1, sum-cc[i], i);
        cnt[i]--;
    }
    return res;
}

int main()
{
    cin >> n;
    while(n--){
        memset(cnt, 0, sizeof cnt);
        mx = 0;
        cin >> x >> y;
        int v = dfs(0, y, 0);
        if(!v) puts("-1");
        else if(!mx) puts("0");
        else
            printf("%d %d\n", v, mx);
    }
    return 0;
}
/**
3
5 10
3 11
2 2
**/
