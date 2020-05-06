// Later must bigger than first.
// LDS.
#include <bits/stdc++.h>
#define N 55
using namespace std;  

int dp[N], path[N];
void trace(string &s, int i){
    if(path[i] == -1) return;
    trace(s, path[i]);
    cout << s[path[i]];
}

int main()  
{  
    string s;
    while(cin >> s){
        int n = s.size();
        for(int i = 0; i < n; ++i) dp[i] = 1, path[i] = -1;
        for(int i = 0; i < n; ++i){
            for(int j = i+1; j < n; ++j){
                if(s[j] <= s[i] && dp[i]+1 >= dp[j]){
                    dp[j] = dp[i]+1;
                    path[j] = i;
                }
            }    
        }
        int mxi = n, mx = 0;
        for(int i = 0; i < n; ++i){
            if(mx <= dp[i]){
                mx = dp[i];
                mxi = i;
            }  
        }
        trace(s, mxi);
        cout << s[mxi];
        cout << endl;
    }
    return 0;  
} 
