#include <iostream>

using namespace std;
int mp[3][3];
bool solve(){
    for(int i = 0; i < 3; ++i){
        if(mp[i][0] == mp[i][1] && mp[i][1] == mp[i][2])
            return true;
        if(mp[0][i] == mp[1][i] && mp[1][i] == mp[2][i])
            return true;
    }
    if(mp[0][0] == mp[1][1] && mp[1][1] == mp[2][2])
        return true;
    if(mp[0][2] == mp[1][1] && mp[1][1] == mp[2][0])
        return true;
    return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--){

        for(int i = 0; i < 3; ++i){
            for(int j = 0; j < 3; ++j)
                cin >> mp[i][j];
        }
        if(solve())
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
/*
2
1 0 1
0 0 1
1 0 0
0 1 0
1 0 0
1 0 1
*/
