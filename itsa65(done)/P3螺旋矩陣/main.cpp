#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int s,d;
    while(cin>>s){
        cin.ignore();
            cin>>d;
        int arr[s][s];
        int id=1;
        if(d==1){
            for(int i=0;i<(s+1)/2;++i){
                int ss=s-i*2;
                for(int j=0;j<ss;++j){
                    arr[i][i+j]=id;
                    id++;
                }
                for(int j=0;j<ss-1;++j){
                    arr[i+1+j][s-1-i]=id;
                    id++;
                }
                for(int j=0;j<ss-1;++j){
                    arr[s-1-i][s-2-i-j]=id;
                    id++;
                }
                for(int j=0;j<ss-2;++j){
                    arr[s-2-i-j][i]=id;
                    id++;
                }
            }
        }
        else{
            for(int i=0;i<(s+1)/2;++i){
                int ss=s-i*2;
                for(int j=0;j<ss;++j){
                    arr[i+j][i]=id;
                    id++;
                }
                for(int j=0;j<ss-1;++j){
                    arr[s-1-i][i+1+j]=id;
                    id++;
                }
                for(int j=0;j<ss-1;++j){
                    arr[s-2-i-j][s-1-i]=id;
                    id++;
                }
                for(int j=0;j<ss-2;++j){
                    arr[i][s-2-i-j]=id;
                    id++;
                }
            }
        }
        for(int i=0;i<s;++i){
            for(int j=0;j<s;++j){
                if(j!=0)
                    cout<<",";
                printf("%03d",arr[i][j]);
            }
            cout<<endl;
        }
    }
    return 0;
}
