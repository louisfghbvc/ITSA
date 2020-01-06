#include <iostream>
using namespace std;
bool find_num(int arr[], int x, int size){
    for(int i = 1; i <= size; ++i){
        if(arr[i] == x)
            return true;
    }
    return false;
}
int main()
{
    int n;
    while(cin >> n){
        int s[n + 2], t[n + 2];
        s[1] = 1, t[1] = 2;
        for(int i = 2; i <= n; ++i){
            s[i] = s[i - 1] + t[i - 1];
            t[i] = t[i - 1] + 1;
            while(find_num(s, t[i], i)){
                t[i]++;
            }
        }
        cout << s[n] << "\n";
    }
    return 0;
}
