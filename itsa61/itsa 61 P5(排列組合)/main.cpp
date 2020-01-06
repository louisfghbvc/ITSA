#include <iostream>

using namespace std;
typedef long long LL;
LL gio(LL x){
    if(x == 0)
        return 1;
    return (x * gio(x - 1));
}
LL ans(int m, int n){
    if(n == 1)
        return 1;
    if(m == 0)
        return 0;
    return gio(m)/gio(m-n);
}
int main()
{
    int t, m, n;
    cin >> t;
    while(t--){
        cin >> m;
        cin.ignore();
        cin >> n;
        cout << ans(m, n) << endl;
    }
    return 0;
}
