#include <iostream>
#include <cstring>
#include <stack>

using namespace std;
int w, y, n;
int arr[105], ans[105][2];
bool ok;
void dfs(int i, int sum, int d){
    if(ok)
        return;
    for(; i < n; ++i){
        ans[d][0] = i;
        sum += arr[i];
        if(d != y - 1)
            dfs(i + 1, sum, d + 1);
        else{
            if(sum == w){
                cout << "k" << ans[0][0];
                for(int k = 1; k < y; ++k)
                    cout << ",k" << ans[k][0];
                cout << endl;
                ok = true;
                return;
            }
            else if(sum < w){
                if(ans[y][1] < sum){
                    ans[y][1] = sum;
                    for(int k = 0; k < y; ++k)
                        ans[k][1] = ans[k][0];
                }
            }
        }
        sum -= arr[i];
    }
}
int main()
{


    while(cin >> w){
        cin.ignore();
        cin >> y;
        cin.ignore();
        cin >> n;
        memset(ans, 0, sizeof(ans));
        for(int i = 0; i < n; ++i){
            cin.ignore();
            cin >> arr[i];
        }
        ok = false;
        dfs(0, 0, 0);
        if(ok);
        else{
            cout << "k" << ans[1][0];
            for(int k = 1; k < y; ++k)
                cout << ",k" << ans[1][k];
            cout << endl;
        }
    }
    return 0;
}
//200 6 10 21 27 34 41 54 61 17 18 19 10
