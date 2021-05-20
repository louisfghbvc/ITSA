#include <bits/stdc++.h>

#define Fast cin.tie(0), ios::sync_with_stdio(0)
#define louisfghbvc int t; cin >> t; for(int tt = 0; tt < t; ++tt)
using namespace std;

/**
Read problem statement carefully
6
1 6
3 5
10 2
8 10

3
1 6
3 10
6 9
10 20
11 2
12 10

**/

struct people{
    int enter = 0, cost = 0;
    bool isWen = false;
    bool operator<(people &p2) const{
        return enter < p2.enter;
    }
};

void solve(int n){
    cin >> n;
    int a, b;
    vector<people> arr;
    while(cin >> a >> b){
        arr.push_back({a, b, 0});
    }
    arr.back().isWen = true;

    sort(arr.begin(), arr.end());

    vector<int> center(n);
    vector<bool> vis(n);
    int i = 0;
    for(int time = 0; time <= 10000; ++time){
        // clean center
        for(int k = 0; k < n; ++k){
            if(center[k] <= time){
                vis[k] = 0;
                center[k] = 0;
            }
        }

        while(i < arr.size() && arr[i].enter <= time){
            bool ok = 0;
            for(int k = 0; k < n; ++k){
                if(!vis[k]){
                    vis[k] = 1;
                    if(arr[i].isWen){
                        cout << "Serve at this counter: " << k+1 << "\n";
                        cout << "Waiting time: " << time - arr[i].enter << "\n";
                        return;
                    }
                    center[k] = time + arr[i].cost;
                    i++;
                    ok = 1;
                    break;
                }
            }
            if(!ok) break;
        }

    }

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
