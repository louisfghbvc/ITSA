// Just use set. n is small. easy.

#include <bits/stdc++.h>

#define louisfghbvc int t; cin >> t; while(t--)
using namespace std;

void solve(){
    int n, m;
    cin >> n;
    set<int> home, self;
    vector<int> course[n];
    for(int i = 0; i < n; ++i){
        cin >> m;
        course[i] = vector<int>(m);
        bool gg = false;
        for(auto &it: course[i]){
            cin >> it;
            if(!it) gg = 1;
        }
        if(gg){
            for(int x: course[i]) if(x) home.insert(x);
        }
    }
    for(int i = 0; i < n; ++i){
        bool qq = false;
        for(int x: course[i]){
            if(home.count(x)) qq = true;
        }
        if(qq){
            for(int x: course[i]) if(x && !home.count(x)) self.insert(x);
        }
    }
    if(home.empty()) cout << "None\n";
    else{
        bool f = true;
        for(int x : home){
            if(!f) cout << " ";
            cout << x;
            f = false;
        }
        cout << "\n";
    }
    if(self.empty()) cout << "None\n";
    else{
        bool f = true;
        for(int x : self){
            if(!f) cout << " ";
            cout << x;
            f = false;
        }
        cout << "\n";
    }
}

int main()
{
    //louisfghbvc{
        solve();
    //}
    return 0;
}
