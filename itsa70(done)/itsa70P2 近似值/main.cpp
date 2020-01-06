#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int k, n;
    string str = "14159265358979348326";
    cin >> k;
    for(int i = 0; i < k; ++i){
        cin >> n;
        cout << str[n - 1] << endl;
    }
    return 0;
}
