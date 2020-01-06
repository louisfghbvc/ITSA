#include <iostream>
#include <bitset>

using namespace std;
typedef unsigned long long ull;
int main()
{
    ull m, s, d, ts;
    bitset<32> bt;
    while(cin >> m >> s >> d){

        for(int i = m; i > 0; --i){
            ts = s;
            bt.reset();
            do{
                cout << ts;
                bt[i] = 1;
                ts
            }while(ts != d);


        }
    }
    return 0;
}
