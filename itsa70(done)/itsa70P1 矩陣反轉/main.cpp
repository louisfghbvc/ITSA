#include <iostream>

using namespace std;

int main()
{
    int m, n;
    while(cin >> m >> n){
        int arr[m][n], T[n][m];
        for(int i = 0; i < m; ++i)
            for(int j = 0; j < n; ++j){
                cin >> arr[i][j];
                T[j][i] = arr[i][j];
            }
        for(int i = 0; i < n; ++i){
            bool f = true;
            for(int j = 0; j < m; ++j){
                if(!f)
                    cout << " ";
                cout << T[i][j];
                f = 0;
            }
            cout << endl;
        }

    }
    return 0;
}
