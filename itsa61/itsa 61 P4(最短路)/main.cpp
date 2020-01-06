#include <iostream>
#include <queue>
#include <cstring>
#define INF 1e9

using namespace std;
int adj[1005][1005], cost[1005][1005];
bool inq[1005];
int t, m, d[1005];
void spfa(){
    d[0] = 0;

    queue <int> q;
    q.push(0);
    inq[0] = true;
    while(!q.empty()){
        int u = q.front(); q.pop();
        inq[u] = 0;
        for(int i = 0; i < m; ++i){
            if(adj[u][i]){
                if(d[u] + cost[u][i] < d[i]){
                    d[i] = d[u] + cost[u][i];
                    if(!inq[i]){
                        q.push(i);
                        inq[i] = 0;
                    }
                }
            }
        }
    }
}
int main()
{

    cin >> t;
    while(t--){
        cin >> m;
        memset(inq, 0, sizeof(inq));
        for(int i = 0; i < m; ++i){
            d[i] = INF;
        }
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < m; ++j){
                cin >> adj[i][j];
                if(adj[i][j] == 0){
                    cost[i][j] = INF;
                }
                else
                    cost[i][j] = 1;
            }
        }
        spfa();
        cout << d[m-1] << endl;
    }
    return 0;
}
/*
2
3
0 1 0
1 0 1
0 1 0
5
0 1 0 1 0
1 0 1 1 0
0 1 0 1 1
1 1 1 0 0
0 0 1 0 0

*/
