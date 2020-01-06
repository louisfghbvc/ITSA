#include <iostream>
#include <set>
#include <cstring>
#include <bitset>

using namespace std;
int t, n, m;
int main()
{
    cin >> t;
    while(t--){
        set <int> st[11];
        cin >> n >> m;
        for(int i = 0; i < n; ++i){
            int num, x;
            cin >> num;
            for(int j = 0; j < num; ++j){
                cin >> x;
                st[i].insert(x);
            }
        }
        int ans = 0;
        bool lock[n];

        for(int i = 0; i < (1 << m); ++i){
        	memset(lock, false, sizeof lock);
        	bitset<17> bits(i);

    		for(int j = 0; j < m; ++j){
    			int tnum;
    			if(bits[j])
    				tnum = j+1;
    			else
    				tnum = -j-1;
    			for(int k = 0; k < n; ++k){
        			if(st[k].find(tnum)!=st[k].end()){
        				lock[k] = true;
        			}
    			}
			}
			bool ok = true;
			for(int j = 0; j < n; ++j)
				ok &= lock[j];
        	if(ok)
        		ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
/*
2
2 3
3 1 2 3
2 2 -3
1 6
4 -6 -4 1 3
*/
