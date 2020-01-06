#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int q = 0;
        for(int i = 2; i < n; ++i){
            if(n % i == 0)
                q++;
        }
        cout << q / 2 << endl;
    }
    return 0;
}
