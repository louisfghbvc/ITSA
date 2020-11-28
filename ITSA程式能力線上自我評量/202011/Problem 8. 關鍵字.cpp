#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; while(t--)
using namespace std;
typedef unsigned long long LL;

template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep = ""; for(const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << " end.\n"; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

void solve(){
    string str;
    map<string, int> mp;
    while(getline(cin, str)){
        str += '$';
        string tmp = "";
        for(char c: str){
            if(isalpha(c)) c = tolower(c), tmp += c;
            else if(tmp.size()) mp[tmp]++, tmp = "";
        }
    }
    priority_queue<pair<int, string>> pq;
    for(auto &[a, b]: mp){
        pq.push({-b, a});
        if(pq.size() > 3) pq.pop();
    }
    deque<pair<string, int>> ans;
    while(pq.size()){
        auto [a, b] = pq.top(); pq.pop();
        ans.push_front({b, -a});
    }
    for(auto &[a, b]: ans)
        cout << a << " = " << b << "\n";
}

int main()
{
    //Fast;
    //louisfghbvc
        solve();
    return 0;
}

/**
(Mashable) – There is no denying
that Facebook has had an impact
on the way the younger set
flirt, fall in love and break
up. Now, Seventeen magazine has
released a study that depicts
just what kind of repercussions
the social networking site has
had on modern courtship.
**/
