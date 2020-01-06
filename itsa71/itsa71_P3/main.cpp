#include <iostream>
#include <cstring>
using namespace std;
string str;
int lds[55], preve[55];
void trace(int i){
    if(preve[i] != -1){
        trace(preve[i]);
    }
    cout << str[i];
}
int main()
{

    while(cin >> str){
        for(int i = 0; i < str.length(); ++i){
            lds[i] = 1;
            preve[i] = -1;
        }
        int mx = 0, pos = 0;
        for(int i = 0; i < str.length(); ++i){
            for(int j = i + 1; j < str.length(); ++j){
                if(str[i] >= str[j]){
                    if(lds[i] + 1 >= lds[j]){
                        lds[j] = lds[i] + 1;
                        preve[j] = i;
                    }
                }
            }
            if(lds[i] >= mx){
                mx = lds[i];
                pos = i;
            }
        }
        trace(pos);
        cout << "\n";
    }
    return 0;
}
/*
5687643821
456879421
89321
11234
*/
