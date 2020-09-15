// Set again nothing special.

#include <bits/stdc++.h>

#define louisfghbvc int t; cin >> t; while(t--)
using namespace std;

void solve(){
    int n;
    cin >> n;
    set<string> MP, Survey, G, Farmer;

    string name;
    int a, b;
    for(int i = 0; i < n; ++i){
        cin >> name >> a >> b;
        bool good = false;
        bool fast = false;
        if(a == 1 || b == 1) good = true;
        if(a == 3 || b == 3) fast = true;
        if(good && !fast) MP.insert(name);
        else if(good && fast) Survey.insert(name);
        else if(!good && fast) G.insert(name);
        else Farmer.insert(name);
    }

    for(auto &s: MP){
        cout << s << " Military Police\n";
    }
    for(auto &s: Survey){
        cout << s << " Survey\n";
    }
    for(auto &s: G){
        cout << s << " Garrison\n";
    }
    for(auto &s: Farmer){
        cout << s << " Farmer\n";
    }
}

int main()
{
    //louisfghbvc{
        solve();
    //}
    return 0;
}
