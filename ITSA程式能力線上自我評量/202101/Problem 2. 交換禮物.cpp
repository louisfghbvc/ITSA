#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
using namespace std;
typedef long long LL;

/**
Read problem statement carefully
1
A1 GIFT1
**/

vector<string> name;
vector<string> gift;

vector<string> ans;

void dfs(string s, int i = 0, int vis = 0){
    if(i == name.size()){
        s.pop_back();
        ans.push_back(s);
        return;
    }
    for(int j = 0; j < gift.size(); ++j){
        if((vis & (1<<j)) || j == i) continue;
        dfs(s + name[i] + " " + gift[j] + ",", i+1, vis | 1<<j);
    }
}

void solve(int n){
    cin >> n;
    name = vector<string>(n);
    gift = vector<string>(n);
    for(int i = 0; i < n; ++i){
        cin >> name[i] >> gift[i];
    }

    dfs("");

    cout << ans.size() << "\n";
    for(auto &s: ans)
        cout << s << "\n";
    
}

int main()
{
    // Fast;
    // louisfghbvc
        solve(1);
    return 0;
}

/**
Enjoy the problem.
**/
