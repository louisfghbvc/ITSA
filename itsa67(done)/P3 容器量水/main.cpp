#include <iostream>

using namespace std;
int gcd(int a, int b){
    int r = 0;
    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main()
{
    int n, k;
    int arr[101];
    while(cin >> n >> k){
        int ans;
        bool ok = false;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            if(i != 0)
                ans = gcd(ans, arr[i]);
            else
                ans = arr[i];
            if(k % arr[i] == 0)
                ok = true;
        }
        if(ans == 1 || ok){
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}
