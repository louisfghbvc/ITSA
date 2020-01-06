#include <iostream>

using namespace std;

int main()
{
    string ans, str;
    cin >> ans;
    while(cin >> str){
        if(str == "0000")
            break;
        int a = 0, b = 0;
        for(int i = 0; i < 4; ++i){
            for(int j = 0; j < 4; ++j){
                if(ans[i] == str[j]){
                    if(i == j)
                        a++;
                    else
                        b++;
                    break;
                }
            }
        }
        cout << a << "A" << b << "B\n";
    }
    return 0;
}
