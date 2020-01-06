#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        char *str=(char*)s.c_str();
        char *p;
        p=strtok(str,",:;");
        cout<<"Tokens found:\n";
        while(p!=NULL){
            printf("%s\n",p);
            p=strtok(NULL,",:;");
        }
    }
    return 0;
}
