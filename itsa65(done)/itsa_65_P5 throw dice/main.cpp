#include <iostream> 
#include <cstring> 
 
using namespace std; 
typedef long long LL; 
 
LL n, x; 
LL table[11][71]; 
 
LL pow(LL x, LL y){ 
    if(y == 0) 
        return 1; 
    LL tmp = pow(x, y/2); 
    if(y % 2) 
        return x * tmp * tmp; 
    else{ 
        return tmp * tmp; 
    } 
} 
LL gcd(LL a, LL b){ 
    if(b == 0) 
        return a; 
    return gcd(b, a%b); 
} 
int main() 
{ 
    memset(table, 0, sizeof(table)); 
 
    table[0][0] = 1; 
    for(int i = 1; i <= 10; ++i){ 
        for(int j = 6 * i; j >= i; --j){ 
            for(int k = 1; k <= j && k <= 6; ++k){ 
                table[i][j] += table[i - 1][j - k]; 
            } 
        } 
    } 
    for(int i = 1; i <= 10; ++i) 
        for(int j = 6 * i; j >= 0; --j) 
                table[i][j] += table[i][j+1]; 
 
    while(cin >> n >> x, n + x){ 
        LL b = pow(6, n), a = table[n][x]; 
        LL dgcd = gcd(a, b); 
        a /= dgcd; 
        b /= dgcd; 
        if(b == 1) 
            cout << a << endl; 
        else 
            cout << a << "/" << b << endl; 
    } 
    return 0; 
}  
/*
1 7
2 2
3 11
3 9
7 38
0 0
**/
