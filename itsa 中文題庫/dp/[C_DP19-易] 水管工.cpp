// Just greedy, because 5, 3, 1 const.
// Easy to observe from 5 to 1. return cost.
// And finally two case l-1, w or w-1, l.
#include <bits/stdc++.h>
using namespace std;

int greedy(int x){
    int cost = 0;
    if(x >= 5){
        cost += 20 * (x/5);
        x %= 5;
    }
    if(x >= 3){
        cost += 13 * (x/3);
        x %= 3;
    }
    if(x >= 1){
        cost += 5 * (x/1);
        x %= 1;
    }
    return cost;
}

int main()
{
    int t, l, w;
    cin >> t;
    while(t--){
        cin >> l >> w;
        printf("%d\n", min(greedy(w-1)+greedy(l), greedy(w)+greedy(l-1)));
    }
}
