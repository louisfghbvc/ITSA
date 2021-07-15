#include <bits/stdc++.h>  
 
#define Fast cin.tie(0), ios::sync_with_stdio(0)  
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)  
using namespace std;  
  
/** 
Read problem statement carefully 
4
1 1 4 4 2 1 4 1 3 2 1 4 3 2
1 2 4 4 2 1 4 3 4 1 2 4 4 1
2 1 2 4 2 1 2 4 4 1 1 4 4 1
4 4 2 1 1 3 4 1 1 4 2 4 1 2
**/  

bool firstT(vector<int> &A, vector<int> &B){
    if(!(A[1] == 1 || A[1] == 2)) return false;
    if(!(A[3] == 3 || A[3] == 4)) return false;
    if(!(A[4] == 1 || A[4] == 2)) return false;
    if(!(A[5] == 1 || A[5] == 2)) return false;
    if(!(A[6] == 3 || A[6] == 4)) return false;

    if(!(B[1] == 3 || B[1] == 4)) return false;
    if(!(B[3] == 1 || B[3] == 2)) return false;
    if(!(B[4] == 3 || B[4] == 4)) return false;
    if(!(B[5] == 3 || B[5] == 4)) return false;
    if(!(B[6] == 1 || B[6] == 2)) return false;
    return true;
}

bool secT(vector<int> &A, vector<int> &B){
    if(!(A[1] == 3 || A[1] == 4)) return false;
    if(!(A[3] == 1 || A[3] == 2)) return false;
    if(!(A[4] == 1 || A[4] == 2)) return false;
    if(!(A[5] == 3 || A[5] == 4)) return false;
    if(!(A[6] == 3 || A[6] == 4)) return false;

    if(!(B[1] == 1 || B[1] == 2)) return false;
    if(!(B[3] == 3 || B[3] == 4)) return false;
    if(!(B[4] == 3 || B[4] == 4)) return false;
    if(!(B[5] == 1 || B[5] == 2)) return false;
    if(!(B[6] == 1 || B[6] == 2)) return false;
    return true;
}

void solve(int n){  
    vector<int> A(7), B(7);
    for(auto &it: A) cin >> it;
    for(auto &it: B) cin >> it;

    if(firstT(A, B) || secT(A, B)) cout << "OK!\n";
    else cout << "Error!\n";
}  
  
int main()  
{  
    // Fast;
    louisfghbvc
        solve(1);
    return 0;
}
