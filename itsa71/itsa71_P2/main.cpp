#include <iostream>
#include <cstring>
#define MX 10000
using namespace std;
int dis[1000][1000], min_dis[1000];
bool vis[1000];
int main()
{
    int t, n, k;

    cin >> t;
    while(t--){
        memset(vis, 0, sizeof vis);
        cin >> n >> k;
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                cin >> dis[i][j];
        for(int i = 0; i < n; ++i)
            min_dis[i] = MX;
        for(int i = 0; i < n; ++i){
            if(i != 0)
                cout << " ";
            cout << k;
            vis[k] = true;
            int mn = MX, pos = k;
            for(int j = 0; j < n; ++j){
                min_dis[j] = min(min_dis[j], dis[k][j]);
                if(!vis[j] && mn > min_dis[j]){
                    mn = min_dis[j];
                    pos = j;
                }
            }
            k = pos;
        }
        cout << "\n";
    }
    return 0;
}
/*
2
6 0
0 10 10000 30 45 10000
10 0 50 10000 40 25
10000 50 0 10000 35 15
30 10000 10000 0 10000 20
45 40 35 10000 0 55
10000 25 15 20 55 0
6 0
0 10 10000 30 45 10000
10 0 5 10000 14 25
10000 5 0 10000 35 15
30 10000 10000 0 10000 2
45 14 35 10000 0 55
10000 25 15 2 55 0
*/
