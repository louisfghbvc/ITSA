#include <bits/stdc++.h>

using namespace std;
int sum(int x){
    int ans = 0;
    while(x > 0){
        ans += x%10;
        x /= 10;
    }
    return ans;
}
int main()
{
    int n, t;
    cin >> n;
    vector<pair<int, int> > v;
    for(int i = 0; i < n; ++i){
        cin >> t;
        v.push_back(make_pair(sum(t), t));
    }
    sort(v.begin(), v.end());
    bool f = true;
    for(int i = 0; i < v.size(); ++i){
        if(!f)
            cout << " ";
        cout << v[i].second;
        f = 0;
    }
    cout << "\n";
    return 0;
}
