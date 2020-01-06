#include <iostream>

using namespace std;
int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a%b);
}
int main()
{
    int s, a1, a2, b1, b2;
    cin >> s;
    while(s--){
        cin >> a1;
        cin.ignore();
        cin >> a2;
        cin.ignore();
        cin >> b1;
        cin.ignore();
        cin >> b2;
        int c1 = a1 * b2, c2 = b1 * a2, d = a2 * b2;
        int com = gcd(c1 + c2, d);
        cout << (c1+c2)/com << "/" << d/com << endl;
    }
    return 0;
}
