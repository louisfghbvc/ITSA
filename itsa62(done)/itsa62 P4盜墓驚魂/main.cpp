#include <iostream>

using namespace std;

int main()
{
    int t, m, x;
    cin >> t;
    while(t--){
        cin >> m;
        int tmp = 0;
        for(int i = 0; i < m; ++i){
            cin >> x;
            tmp ^= x;
        }
        if(tmp == 0)
            cout << "no\n";
        else
            cout << "yes\n";
    }
    return 0;
}
