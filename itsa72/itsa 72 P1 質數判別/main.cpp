#include <bits/stdc++.h>

using namespace std;
bool pri[105];
int main()
{
    int n;
    for(int i = 2; i <= 105; ++i){
        if(!pri[i]){
            for(int j = 2 * i; j <= 105; j += i){
                pri[j] = true;
            }
        }
    }
    while(cin >> n){
        cout << (pri[n] ? "NO\n": "YES\n");
    }
    return 0;
}
