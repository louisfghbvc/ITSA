#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        double pi=4.0;
        for(int i=1,k=3;i<n;++i,k+=2){
            double sub=(i%2)? -4.0/(double)k:4.0/(double)k;
            pi+=sub;
        }
        printf("%.5f\n",pi);
    }
    return 0;
}
