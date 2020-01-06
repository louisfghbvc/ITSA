#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    while(cin>>s1>>s2){
        int dp[105][105]={};
        int maxi=0,maxl=0;
        for(int i=1;i<=s1.size();++i){
            for(int j=1;j<=s2.size();++j){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                    if(dp[i][j]>maxl){
                        maxl=dp[i][j];
                        maxi=i;
                    }
                }
            }
        }
        string ans=s1.substr(maxi-maxl,maxl);
        if(ans!="")
            cout<<ans<<endl;
        else
            cout<<"No common sequence!\n";
    }
    return 0;
}
