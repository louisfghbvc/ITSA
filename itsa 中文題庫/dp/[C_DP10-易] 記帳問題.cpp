// use map. why this is dp.?
// simple. 
// first man money - cost. 
// others money + avg cost.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string name[11], man;
    while(cin >> n){
        unordered_map<string, int> mp;
        for(int i = 0; i < n; ++i){
            cin >> name[i];
            mp[name[i]] = 0;
        }
        int cost, num;
        while(cin >> man, man != "0"){
            cin >> cost >> num;
            mp[man] -= cost;
            for(int i = 0; i < num; ++i){
                cin >> man;
                mp[man] += (cost/num);
            }
        }
        for(int i = 0; i < n; ++i)
            cout << name[i] << " " << mp[name[i]] << endl;
    }

    return 0;
}
/*
6
tom mary joe david steve gary
tom 400 2 mary steve
mary 120 3 joe david tom
0
*/
