#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    char c;
    int r;
    getline(cin, str);
    cin >> c;
    cin >> r;
    cin.ignore();
    vector<char> grid[r+2];
    for(int i = 0; i < r; ++i)
        grid[i].clear();
    int mxr = 0;
    for(int i = (int)str.size() - 1, j = r - 1; i >= 0; --i, j--){
        if(j < 0)
            j = r - 1;
        grid[j].push_back(str[i]);
        mxr = max(mxr, (int)grid[j].size());
    }

    for(int i = 0; i < r; ++i){
        cout << grid[i][0];
        int j = 1;
        for(; j < grid[i].size(); ++j){
            cout << c << grid[i][j];
        }
        for(;j < mxr; ++j){
            cout << c;
        }
        cout << endl;
    }

    return 0;
}
/*
ABCDEFGHIJKLMNOPQRST
+
5
  ABC   DEF ZHABC,AXAWY,
|
6
QEQPERUPEEQORYQOEREQRUQERUQPREQREQRRQERQERQER
+
9
QEQPERUPEEQORYQOEREQRUQERUQPREQREQRRQERQERQER
+
9
*/
