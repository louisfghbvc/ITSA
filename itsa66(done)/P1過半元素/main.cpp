#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(getline(cin,s)){
        stringstream ss(s);
        map <int,int> mymap;
        int cnt=0,tmp,num,maxn=0;
        while(ss>>tmp){
            cnt++;
            mymap[tmp]++;
        }
        num=cnt/2;
        map <int,int>::iterator i;
        bool f=false;
        for(i=mymap.begin();i!=mymap.end();++i){
            maxn=max(maxn,i->second);
        }
        for(i=mymap.begin();i!=mymap.end();++i){
            if(i->second==maxn,i->second>num){
                cout<<i->first<<endl;
                f=true;
                break;
            }
        }
        if(!f)
            cout<<"NO"<<endl;
    }
    return 0;
}
