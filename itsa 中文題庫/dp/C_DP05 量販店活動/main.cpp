#include <iostream>
#include <map>

using namespace std;

int main()
{
    int weight, n;
    while(cin >> weight >> n){
        int w[n + 2], cost[n + 2];
        string name[n + 2];
        int dp[weight + 2] = {};
        bool dd[n + 2][weight + 2] = {};
        for(int i = 1; i <= n; ++i){
            cin >> w[i] >> cost[i] >> name[i];
        }
        for(int i = 1; i <= n; ++i){
            for(int j = w[i]; j <= weight; ++j){
                if(dp[j] < dp[j - w[i]] + cost[i]){
                    dp[j] = dp[j - w[i]] + cost[i];
                    dd[i][j] = true;
                }
            }
        }
        int tw = weight, e = n;
        map <string, int> mp;
        while(tw > 0){
            int i;
            for(i = e; i >= 0; --i){
                if(dd[i][tw]){
                    e = i;
                    break;
                }
            }
            if(i < 0)
                break;
            mp[name[e]]++;
            tw -= w[e];
        }
        cout << "Total: " << dp[weight] << ", including";
        for(int i = 1; i <= n; ++i){
            if(mp[name[i]])
                cout << " " <<mp[name[i]] << " " << name[i];
        }
        cout << endl;
    }
    return 0;
}
