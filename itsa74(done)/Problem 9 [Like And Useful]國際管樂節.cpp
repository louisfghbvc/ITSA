//single source all shortest path, just check max len, and min path, use spfa very fast
#include <bits/stdc++.h>  
#define N 1105  
#define INF 1e9  
using namespace std;  
  
int n, t;  
  
struct node{  
    int b, w;  
};  
  
vector<node> g[N];  
int dis[N], par[N];  
bool vis[N];  
bool f = 1;  
  
void print(int x){  
    if(par[x] != -1)  
        print(par[x]);  
    if(!f)  
        cout << " ";  
    cout << x;  
    f = 0;  
}  
  
int main()  
{  
    int cas;  
    cin >> cas;  
    while(cas--){  
        cin >> n >> t;  
  
        for(int i = 0; i <= n; ++i){  
            g[i].clear();  
            dis[i] = INF;  
            vis[i] = 0;  
            par[i] = -1;  
        }  
  
        int a, b, c;  
        while(cin >> a){  
            if(a == -1) break;  
            cin >> b >> c;  
            g[a].push_back({b, c});  
            g[b].push_back({a, c});  
        }  
  
        queue<int> q;  
        q.push(0);  
        vis[0] = true;  
        dis[0] = 0;  
        while(!q.empty()){  
            int u = q.front(); q.pop();  
            vis[u] = false;  
  
            for(int i = 0; i < g[u].size(); ++i){  
                int v = g[u][i].b, c = g[u][i].w;  
                if(dis[u] + c < dis[v]){  
                    dis[v] = dis[u] + c;  
                    par[v] = u;  
                    if(!vis[v]){  
                        vis[v] = 1;  
                        q.push(v);  
                    }  
                }  
                else if(dis[u] + c == dis[v]){  
                    int cnt = 0, cnt2 = 0;  
                    stack<int> st1, st2;  
                    for(int t = par[v]; t != 0; t = par[t]) st1.push(t), cnt++;  
                    for(int t = u; t != 0; t = par[t]) st2.push(t), cnt2++;  
                    if(cnt2 > cnt){  
                        par[v] = u;  
                    }  
                    else if(cnt2 == cnt){  
                        while(!st1.empty()){  
                            int s1 = st1.top(); st1.pop();  
                            int s2 = st2.top(); st2.pop();  
                            if(s1 > s2){  
                                par[v] = u;  
                                break;  
                            }  
                        }  
                    }  
                }  
            }  
        }  
  
        cout << dis[t] << endl;  
        f = 1;  
        print(t);  
        cout << endl;  
    }  
  
    return 0;  
} 
