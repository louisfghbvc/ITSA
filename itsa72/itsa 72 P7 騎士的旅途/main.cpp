#include <bits/stdc++.h>

using namespace std;

bool vis[9][9];
const int dir[][2] = {{-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};
struct node{
    int x, y;
    int w;
};
int main()
{
    int x1, y1, x2, y2;
    while(cin >> x1 >> y1 >> x2 >> y2, x1 + x2 + y1 + y2){
        queue<node> q;
        memset(vis, 0, sizeof vis);

        q.push(node{x1, y1, 0});
        vis[x1][y1] = true;
        while(!q.empty()){
            node cur = q.front(); q.pop();
            if(cur.x == x2 && cur.y == y2){
                cout << cur.w << "\n";
                break;
            }
            for(int k = 0; k < 8; ++k){
                int x = cur.x + dir[k][0], y = cur.y + dir[k][1];
                if(x < 1 || x > 8 || y < 1 || y > 8 || vis[x][y]) continue;
                vis[x][y] = true;
                q.push(node{x, y, cur.w + 1});
            }
        }
    }
    return 0;
}
/*
1 1 1 5
1 1 2 1
1 1 5 5
0 0 0 0
*/
