#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    string str;
    cin >> t;
    cin.ignore();
    map <char, int> mp;
    while(t--){
        getline(cin, str);
        mp.clear();
        int maxcnt = 0;
        for(int i = 0; i < (int)str.size(); ++i){
            int tmp = ++mp[str[i]];
            maxcnt = max(tmp, maxcnt);
        }
        for(auto i : mp){
            if(i.second == maxcnt){
                cout << i.first << endl;
                break;
            }
        }
    }
    return 0;
}
/*
2
We' re students!
Yes!!! ALL PASS!!!
*/
