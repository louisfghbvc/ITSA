#include <iostream>
#include <cstring>
#include <vector>
#define MN 900
#define MX 99999
using namespace std;
int et[MN], rad;
int main()
{
    int k, n, a, b;
    cin >> k;
    while(k--){
        cin >> n;
        vector< vector <int> > d(MN, vector<int>(MN, MX));
        for(int i = 0; i < n - 1; ++i){
            cin >> a >> b;
            d[a][b] = 1;
            d[b][a] = 1;
        }
        memset(et, 0, sizeof et);
        rad = MX;
        for(int k = 0; k < n; ++k){
            for(int i = 0; i < n; ++i){
                for(int j = 0; j < n; ++j){
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j)
                if(i != j)
                    et[i] = max(et[i], d[i][j]);
        }

        for(int i = 0; i < n; ++i){
            rad = min(et[i], rad);
        }

        for(int i = 0; i < n; ++i){
            if(et[i] == rad){
                cout << i << "\n";
                break;
            }
        }

    }
    return 0;
}
/*
2
5
0 1
1 2
1 3
3 4
15
1 0
2 1
3 1
4 0
5 4
6 4
7 5
8 6
9 7
10 4
11 7
12 5
13 11
14 11
*/
