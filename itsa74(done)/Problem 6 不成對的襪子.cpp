//use Map to count, if odd then cnt++, easy problem
#include <bits/stdc++.h>  
  
using namespace std;  
  
int main()  
{  
    int n;  
    cin >> n;  
    int m[n + 2];  
    for(int i = 0; i < n; ++i)  
        cin >> m[i];  
    for(int i = 0; i < n; ++i){  
        map<string, int> mp;  
        string s;  
        for(int j = 0; j < m[i]; ++j){  
            cin >> s;  
            mp[s]++;  
        }  
        int cnt = 0;  
        for(auto x: mp){  
            if(x.second % 2)  
                cnt++;  
        }  
        cout << cnt << endl;  
    }  
    return 0;  
} 
