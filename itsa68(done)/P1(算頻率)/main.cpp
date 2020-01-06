#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main()
{
    string s, tmp;
    while(getline(cin, s)){
        map <char, int> mp;
        stringstream ss(s);
        int cnt = 0;
        while(ss >> tmp){
            cnt++;
            for(int i = 0; i < (int)tmp.size(); ++i){
                mp[tmp[i]]++;
            }
        }
        cout << cnt << endl;
        for(char c = 'A', sc = 'a'; c <= 'Z' && sc <= 'z'; ++c, ++sc){
            if(mp[c])
                cout << c << " : " << mp[c] << endl;
            if(mp[sc])
                cout << sc << " : " << mp[sc] << endl;
        }
    }
    return 0;
}
