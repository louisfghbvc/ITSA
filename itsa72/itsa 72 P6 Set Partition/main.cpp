#include <bits/stdc++.h>

using namespace std;
long long int f(int m, int n){
    if(n == 1 || m == n)
        return 1;
    if(n == 0)
        return 0;
    return f(m - 1, n - 1) + n * f(m - 1, n);
}
int main()
{
    int m, n;
    cin >> m;
    cin.ignore();
    cin >> n;
    cout << f(m, n) << "\n";
    return 0;
}
/*
2,2
3,1
4,2
*/
