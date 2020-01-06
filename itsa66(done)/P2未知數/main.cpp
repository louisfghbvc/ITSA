#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        stringstream ss(s);
        int two,val;
        char op,eq,x;
        double ans=0;
        if(s[0]=='x'){
            ss>>x;
            ss>>op>>two>>eq>>val;
            if(op=='/')
                ans=(double)val*(double)two;
            else if(op=='+')
                ans=(double)val-(double)two;
            else if(op=='-')
                ans=(double)val+(double)two;
            else if(op=='*')
                if(two)
                    ans=(double)val/(double)two;
             printf("%.1f\n",ans);
        }
        else if(s[s.size()-1]=='x'){
            ss>>two>>op>>val>>eq>>x;
            if(op=='*')
                ans=(double)two*(double)two;
            else if(op=='+')
                ans=(double)val+(double)two;
            else if(op=='-')
                ans=(double)two-(double)val;
            else if(op=='/')
                if(val)
                    ans=(double)two/(double)val;
            printf("%.1f\n",ans);
        }
        else {
            ss>>two;
            ss>>op>>x>>eq>>val;
            if(op=='/'){
                if(val)
                    ans=(double)two/(double)val;
            }
            else if(op=='+')
                ans=(double)val-(double)two;
            else if(op=='-')
                ans=(double)two-(double)val;
            else if(op=='*'){
                if(two)
                    ans=(double)val/(double)two;
            }
            printf("%.1f\n",ans);
        }
    }
}
