// Simple simulate.

#include <bits/stdc++.h>

using namespace std;


void solve(){
    double h, u, d, f;
    cin >> h >> u >> d >> f;

    double down = u*(f/100.0);
    double x = 0;
    double time = 0;
    while(x < h){
        x += u;
        time += 1;
        if(x >= h){
            cout << time << "\n";
            return;
        }
        if(u <= d){
            cout << "0\n";
            return;
        }
        x -= d;
        time += 0.5;
        u -= down;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
/**
4
6 3 1 10
15 6 3 5
20 2 1 50
10 6 1 1
**/
