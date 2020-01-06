#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
string s[16][65536];
void init(){
    s[1][0]="0";
    s[1][1]="1";
    int mask=2;
    for(int i=2; i<16; ++i){
        mask<<=1;
        for(int j=0, k=mask-1; j<mask/2; ++j,--k){
            s[i][j]=s[i-1][j];
            s[i][k]=s[i-1][j];
        }
        for(int j=0; j<mask/2; ++j){
            s[i][j]=s[i][j].insert(0,"0");
        }
        for(int j=mask/2; j<mask; ++j){
            s[i][j]=s[i][j].insert(0,"1");;
        }
    }
}
int pow(int x, int y){
    if(y==0)
        return 1;
    if(y==1)
        return x;
    if(y&1)
        return pow(x, y/2)*pow(x, y/2)*x;
    else
        return pow(x, y/2)*pow(x, y/2);
}
int main()
{
    int n;
    init();
    while(cin>>n){
        int si=pow(2, n);
        for(int i=0; i<si; ++i){
            cout<<s[n][i]<<endl;
        }
    }
    return 0;
}
