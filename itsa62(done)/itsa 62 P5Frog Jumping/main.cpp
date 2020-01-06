#include <iostream>
#include <cstring>

using namespace std;

int t, x, n, a ,b;
int mp[60005] ;
bool solve(int d){
    int st;
    for(st = 0; st < 2 * x; st += d){
        if(mp[st] == 1)
            return false;
    }
    return true;
}
int main()
{

    cin >> t;
    while(t--){
        memset(mp, 0, sizeof(mp));
        cin >> x >> n;
        for(int i = 0; i < n; ++i){
            cin >> a >> b;
            for(int j = a; j < b; ++j)
                mp[j] = 1;
        }
        int d;
        for(d = 1; d < x; ++d){
            if(solve(d)){
                break;
            }
        }
        cout << d << endl;
    }
    return 0;
}
/*
1
30
2
15 21
3 8
*/

