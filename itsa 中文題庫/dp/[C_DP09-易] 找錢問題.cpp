// from big to small. greedy.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int coin[] = {1, 5, 10, 50};
    int k, n, m, c;
    while(scanf("%d,%d,%d", &k, &n, &m) != -1){
        c = (n==1) ? 17 : 25;
        c *= m;
        int rem = k-c;
        int bag[4] = {};
        for(int i = 3; i >= 0; --i){
            if(rem >= coin[i]){
                bag[i] += (rem/coin[i]);
                rem %= coin[i];
            }
        }
        bool f = 0;
        for(int i = 0; i < 4; i++){
            if(bag[i] > 0){
                if(f) putchar(',');
                printf("Coin %d:%d", coin[i], bag[i]);
                f = 1;
            }
        }
        puts("");
    }
    return 0;
}
/*
20,1,1
50,2,1
*/
