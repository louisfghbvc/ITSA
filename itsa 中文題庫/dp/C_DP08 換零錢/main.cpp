#include <iostream>

using namespace std;
typedef long long LL;
int coin[] = {1, 5, 10, 50};
int dp[15005];
int main()
{
    dp[0] = 1;
    for(int i = 0; i < 4; ++i){
        for(int j = coin[i]; j <= 15005; ++j){
            dp[j] += dp[j - coin[i]];
        }
    }
    int n;
    while(cin >> n){
        cout << dp[n] << endl;
    }
    return 0;
}
