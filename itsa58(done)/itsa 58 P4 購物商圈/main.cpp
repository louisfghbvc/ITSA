#include <iostream>
#define INF 1e9
using namespace std;
const int MX = 1005;
int adj[MX][MX], d[MX][MX];
int n, m;

int main()
{

    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < m; ++j){
            cin >> adj[i][j];
            if(adj[i][j] == 0)
                d[i][j] = INF;
            else
                d[i][j] = adj[i][j];
        }
    }
    for(int k = 0; k < m; ++k){
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < m; ++j){
                if(d[i][j] > d[i][k] + d[k][j])
                    d[i][j] = d[i][k] + d[k][j];
            }
        }
    }

    while(n--){
        int a, b;
        cin >> a >> b;
        cout << d[a][b] << endl;
    }
    return 0;
}

/*
3
5
0 5 9 2 1
5 0 8 3 2
9 8 0 5 1
2 3 5 0 1
1 2 1 1 0
3 4
0 2
1 0
*/

