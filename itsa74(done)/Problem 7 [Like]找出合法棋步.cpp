//Design, 黑白棋, first find white, second find black, if exist then ans++
#include <bits/stdc++.h>  
  
using namespace std;  
int grid[8][8];  
const int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {0, -1}, {1, 1}, {1, 0}, {1, -1}};  
  
bool black(int x, int y, int d){  
    int nx = x + dir[d][0], ny = y + dir[d][1];  
    if(nx < 0 || nx >= 8 || ny < 0 || ny >= 8 || grid[nx][ny] == 0) return false;  
    if(grid[nx][ny] == 1) return true;  
    else return black(nx, ny, d);  
}  
  
bool white(int x, int y, int d){  
    int nx = x + dir[d][0], ny = y + dir[d][1];  
    if(nx < 0 || nx >= 8 || ny < 0 || ny >= 8 || grid[nx][ny] != 2) return false;  
    return black(nx, ny, d);  
}  
  
int main()  
{  
    for(int i = 0; i < 8; ++i){  
        for(int j = 0; j < 8; ++j){  
            cin >> grid[i][j];  
        }  
    }  
    int ans = 0;  
    for(int i = 0; i < 8; ++i){  
        for(int j = 0; j < 8; ++j){  
            if(grid[i][j]) continue;  
            for(int k = 0; k < 8; ++k){  
                if(white(i, j, k)){  
                    ans++; break;  
                }  
            }  
        }  
    }  
    cout << ans << endl;  
    return 0;  
}  
