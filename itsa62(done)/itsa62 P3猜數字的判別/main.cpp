#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        char arr[4], guess[4];
        for(int i = 0; i < 4; i++)
            cin >> arr[i];
        for(int i = 0; i < 4; i++)
            cin >> guess[i];
        int a = 0, b = 0;
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                if(guess[j] == arr[i] && i==j){
                    a++;
                    break;
                }
                else if(guess[j] == arr[i]){
                    b++;
                    break;
                }
            }
        }

        cout << a << "a" << b << "b\n";
    }
    return 0;
}
/*
1
0347
1437
*/
