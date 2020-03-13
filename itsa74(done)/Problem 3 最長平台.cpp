//0~9, use counting sort, easy problem
#include <bits/stdc++.h>  
  
using namespace std;  
int fre[12];  
  
int main()  
{  
    int m, n, x;  
    cin >> m;  
    while(m--){  
        cin >> n;  
        memset(fre, 0, sizeof fre);  
        for(int i = 0; i < n; ++i){  
            cin >> x;  
            fre[x]++;  
        }  
        int mx = 0;  
        for(int i = 0; i < 10; ++i){  
            mx = max(mx, fre[i]);  
        }  
        cout << mx << endl;  
    }  
    return 0;  
} 
