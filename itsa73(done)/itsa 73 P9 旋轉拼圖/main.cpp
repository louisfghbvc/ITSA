#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int grid[5][5];
    while(t--){
        int sum = 0;
        for(int i = 0; i < 5; ++i){
            for(int j = 0; j < 5; ++j){
                cin >> grid[i][j];
                sum += grid[i][j];
            }
        }
        if(sum == 5)
            cout << "1\n";
        else if(sum == 8)
            cout << "7\n";
        else if(sum == 13)
            cout << "8\n";
        else if(sum == 15)
            cout << "5\n";
        else if(sum == 10){
            int sum2 = 0;
            for(int i = 1; i < 4; ++i)
                for(int j = 1; j < 4; ++j)
                    sum2 += grid[i][j];
            if(sum2 == 5)
                cout << "4\n";
            else{
                vector<int> layer2 = {grid[1][1], grid[1][2], grid[1][3], grid[2][3], grid[3][3],
                grid[3][2], grid[3][1], grid[2][1]};
                bool six = true;
                for(int i = 1; i < 8; ++i){
                    if(layer2[i] && layer2[i - 1])
                        six = false;
                }
                if(layer2[0] && layer2[7]) six = false;
                if(six)
                    cout << "6\n";
                else
                    cout << "9\n";
            }
        }
        else if(sum == 12){
            int sum2 = 0;
            for(int i = 1; i < 4; ++i){
                for(int j = 1; j < 4; ++j){
                    if(i == 2 && j == 2) continue;
                    sum2 += grid[i][j];
                }
            }
            if(sum2 == 0)
                cout << "0\n";
            else if(sum2 == 2)
                cout << "2\n";
            else
                cout << "3\n";
        }
    }
    return 0;
}
/*
1 -> 5
7 -> 8
8 -> 13
5 -> 15

4 -> 10 -> layer2 = 5
6 -> 10 -> layer2 even = 3
9 -> 10 -> layer2 even = 2

0 -> 12 -> layer2 = 0
2 -> 12 -> layer2 = 2
3 -> 12 -> layer2 = 1

*/
