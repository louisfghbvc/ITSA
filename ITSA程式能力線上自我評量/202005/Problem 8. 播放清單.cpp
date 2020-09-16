// Maintain a queue.
// Simulate all case.


#include <bits/stdc++.h>  
 
#define louisfghbvc int t; cin >> t; while(t--)  
using namespace std;  
  
void solve(){  
    queue<int> q;  
    int x;  
    for(int i = 0; i < 10; ++i){  
        cin >> x;  
        q.push(x);  
    }  
  
    string ha;  
    int prev = -1, ele = -1;  
    while(cin >> ha){  
        if(ha == "0") break;  
        if(ha == "PLAY"){  
            if(prev == 'P') continue;  
            if(ele != -1) continue;  
            ele = q.front(); q.pop();  
            prev = 'P';  
        }  
        else if(ha == "LOOP"){  
            if(prev == 'L' || prev != 'P') continue;  
            prev = 'L';  
        }  
        else{  
            if(prev == 'S' || ele == -1) continue;  
            q.push(ele);  
            ele = -1;  
            prev = 'S';  
        }  
    }  
  
    bool f = true;  
    for(int i = q.size()-1; i >= 0; --i){  
        if(!f) cout << " ";  
        cout << q.front();  
        q.pop();  
        f = false;  
    }  
    cout << "\n";  
}  
  
int main()  
{  
    //louisfghbvc{  
        solve();  
    //}  
    return 0;  
} 
