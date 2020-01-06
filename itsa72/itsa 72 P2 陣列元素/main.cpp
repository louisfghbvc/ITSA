#include <bits/stdc++.h>
#define N 20005
using namespace std;
int fre[N];
int n, cnt = 0;
int main()
{
    memset(fre, 0, sizeof fre);
    while(cin >> n){
        fre[n]++;
        cnt++;
    }
    bool ok = false;
    for(int i = 1; i <= 20000; ++i){
        if(fre[i] > cnt / 2){
            cout << i << "\n";
            ok = true;
            break;
        }
    }
    if(!ok) cout << "n/a\n";
    return 0;
}
