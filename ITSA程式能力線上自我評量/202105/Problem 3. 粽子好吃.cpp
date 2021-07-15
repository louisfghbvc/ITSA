#include <bits/stdc++.h>  
 
#define Fast cin.tie(0), ios::sync_with_stdio(0)  
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)  
using namespace std;  
  
/** 
Read problem statement carefully 
6 
1 6 
3 5 
10 2 
8 10 
3 
1 6 
3 10 
6 9 
10 20 
11 2 
12 10 
**/  

typedef pair<int, int> ii;

void solve(int n){  
    cin >> n;  
    int a, b;  

    vector<ii> arr;  
    while(cin >> a >> b){  
        arr.push_back({a, b});  
    }

    sort(arr.begin(), arr.end());  
  
    vector<int> center(n); // save the time
    
    int mn, mni;
    for(auto &[at, tt]: arr){
        if(at >= a && tt != b) break;

        for(int i = 0; i < n; ++i){
            if(center[i] < at)
                center[i] = 0;
        }

        mn = INT_MAX, mni = -1;
        for(int i = 0; i < n; ++i){
            if(center[i] < mn){
                mn = center[i];
                mni = i;
            }
        }

        // minimum must be accept
        center[mni] = max(center[mni], at) + tt; 
    }
    
    cout << "Serve at this counter: " << mni+1 << "\n";
    cout << "Waiting time: " << max(0, mn - a) << "\n";
}  
  
int main()  
{  
    // Fast;  
    // louisfghbvc  
        solve(1);  
    return 0;  
}  
  
/** 
Enjoy the problem. 
**/  
