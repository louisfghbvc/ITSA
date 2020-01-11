#include <bits/stdc++.h>

using namespace std;
struct node{
    int b, g, w;
    bool operator<(node n2){
        return w > n2.w;
    }
};
int main()
{
    int n, t;
    cin >> n;
    bool boy[n + 2], girl[n + 2];
    memset(boy, 0, sizeof boy);
    memset(girl, 0, sizeof girl);
    vector<node> e;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> t;
            e.push_back(node{i + 1, j + 1, t});
        }
    }
    sort(e.begin(), e.end());
    int par = 0;
    for(int i = 0; i < e.size() && par < n; ++i){
        int b = e[i].b, g = e[i].g, w = e[i].w;
        if(boy[b] || girl[g]) continue;
        boy[b] = girl[g] = true;
        par++;
        printf("boy %d pair with girl %d\n", b, g);
    }
    return 0;
}
