#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,a,b;
    while(cin>>n>>a>>b){
        int arr[n+2];
        for(int i=1;i<=n;++i)
            arr[i]=i;
        vector <int> v(arr+1,arr+n+1);
        int st=a-1;
        bool f=false;
        while(v.size()>0){
            if(f)
                cout<<" ";
            int tmp=(st-1+b)%v.size();
            cout<<v[tmp];
            v.erase(v.begin()+tmp);
            f=true;
            st=tmp;
        }
        cout<<endl;
    }
    return 0;
}
