// Sort the continuous interval. and when > k, cut.
// O(NlogN).

#include <bits/stdc++.h>

#define louisfghbvc int t; cin >> t; while(t--)
typedef long long LL;
using namespace std;

const int N = 2e5+5;
LL arr[N];

void solve(){
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> arr[i];
    string s;
    cin >> s;

    for(int r = 0, l = 0; r < n; ++r){
        if(r+1<n && s[r] == s[r+1]){
            // nothing
        }
        else{
            sort(arr + l, arr + r + 1, [&](int a, int b){
                    return a > b;
                 });
            l = r+1;
        }
    }

    LL sum = 0, len = 0;
    for(int i = 0; i < n; ++i){
        sum += arr[i];
        if(i && s[i] == s[i-1]){
            if(++len > k){
                sum -= arr[i];
                len--;
            }
        }
        else{
            len = 1;
        }
    }

    cout << sum << "\n";
}

int main()
{
    //louisfghbvc{
        solve();
    //}
    return 0;
}
/**
8 3
1 5 16 18 7 2 10 11
baaaacaa

5 5
2 4 1 3 1000
aaaaa
**/
