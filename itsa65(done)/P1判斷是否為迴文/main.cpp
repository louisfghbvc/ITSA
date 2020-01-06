#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    while(cin>>s){
        string t=s;
        reverse(s.begin(),s.end());
        bool pal=true;
        for(int i=0;i<=(int)s.size()/2;++i){
            if(t[i]!=s[i]){
                pal=false;
                break;
            }
        }
        if(pal)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
