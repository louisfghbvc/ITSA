// Dp top-down, dp = insert new set, or insert old set.
#include <iostream>

using namespace std;
int F(int m, int n){
    if(n == 1 || m == n)
        return 1;
    return F(m - 1, n - 1) + n * F(m - 1, n);
}
int main()
{
    int t, m, n;
    cin >> t;
    while(t--){
        cin >> m;
        cin.ignore();
        cin >> n;
        cout << F(m, n) << endl;
    }
    return 0;
}
