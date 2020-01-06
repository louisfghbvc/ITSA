#include <iostream>
#include <algorithm>
#define INF 1e9
#define N 105
using namespace std;
int t, n;
int adj[105][105];
struct node{
    int a, b, cost;
    bool operator<(node n2){
        return cost < n2.cost;
    }
}e[N * N];
int p[N];
int findp(int x){
    if(x == p[x])
        return x;
    return p[x] = findp(p[x]);
}
void unionp(int x, int y){
    x = findp(x);
    y = findp(y);

    p[y] = x;
}
int main()
{

    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; ++i)
            p[i] = i;
        for(int i = 0, id = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                cin >> adj[i][j];
                if(!adj[i][j])
                    adj[i][j] = INF;
                e[id++] = node{i, j, adj[i][j]};
            }
        }
        int cnt = n * n, ans = 0;
        sort(e, e + cnt);
        for(int i = 0; i < cnt; ++i){
            if(findp(e[i].a) != findp(e[i].b)){
                unionp(e[i].a, e[i].b);
                ans += e[i].cost;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
