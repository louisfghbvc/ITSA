#include <iostream>
#include <stack>

using namespace std;
string s[15];
int a[15], b[15], c[15];
int pre[24] = {};
int dp[24];
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> s[i] >> a[i] >> b[i] >> c[i];
        a[i] /= 100;
        b[i] /= 100;
    }
    int ans = 0, endi;
    for(int i = 0; i < 24; ++i){
        if(dp[i] <= dp[i-1] && i)
            pre[i] = -1, dp[i] = dp[i-1];
        for(int j = 0; j < n; ++j){
            if(a[j] == i){
                if(dp[b[j]] < dp[i] + c[j])
                    dp[b[j]] = dp[i] + c[j], pre[b[j]] = j;
            }
        }
        if(dp[i] > ans)
            ans = dp[i], endi = i;
    }
    stack<int> st;
    for(int i = endi; i; ) {
			if(pre[i] == -1)
				i--;
			else
				st.push(pre[i]), i = a[pre[i]];
		}
    while(!st.empty()){
        int u = st.top(); st.pop();
        cout << s[u] << " ";
    }
    cout << ans << endl;
    return 0;
}
