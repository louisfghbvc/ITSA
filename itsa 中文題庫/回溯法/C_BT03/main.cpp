#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
int arr[25], sum, side, n;
bool vis[25];
bool dfs(int cnt, int i, int len){
    if(cnt == 3){
        return true;
    }
    int tmp = len;
    for(; i < n; i++){
        if(!vis[i]){
            vis[i] = true;
            tmp += arr[i];
            if(tmp == side){
                if(dfs(cnt + 1, 0, 0))
                    return true;
            }
            else if(tmp < side){
                if(dfs(cnt, i + 1, len + arr[i]))
                    return true;
            }
            tmp -= arr[i];
            vis[i] = false;
        }
    }
    return false;
}
int main()
{
    while(cin >> n){
        sum = 0;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            sum += arr[i];
        }

        side = sum / 4;
        sort(arr, arr + n, greater<int>());
        memset(vis, 0, sizeof vis);

        if(sum % 4)
            cout << "no\n";
        else{
            if(dfs(0, 0, 0))
                cout << "yes\n";
            else
                cout << "no\n";
        }
    }
    return 0;
}
/**
8 1 7 2 6 4 4 3 5
  7 6 5 4 4 3 2 1
**/
