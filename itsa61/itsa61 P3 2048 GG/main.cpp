#include <iostream>

using namespace std;

int main()
{
    int n;
    char c;
    cin >> n;
    int arr[4][4];
    while(n--){
        cin >> c;
        for(int i = 0; i < 4; i++)
            for(int j = 0; j < 4; j++)
                cin >> arr[i][j];
        switch(c){
            case 'U':
                for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 4; j++){
                        if(arr[i][j] == arr[i+1][j]){
                            arr[i][j] = 2*arr[i][j];
                            for(int k = i+1; k < 3; k++)
                                arr[k][j] = arr[k+1][j];
                            arr[3][j] = 0;
                        }
                    }
                }
                break;
            case 'D':
                for(int i = 3; i >= 1; i--){
                    for(int j = 0; j < 4; j++){
                        if(arr[i][j] == arr[i-1][j]){
                            arr[i][j] = 2*arr[i][j];
                            for(int k = i-1; k >= 1; k--)
                                arr[k][j] = arr[k-1][j];
                            arr[0][j] = 0;
                        }
                    }
                }
                break;
            case 'L':
                for(int j = 0; j < 3; j++){
                    for(int i = 0; i < 4; i++){
                        if(arr[i][j] == arr[i][j+1]){
                            arr[i][j] = 2*arr[i][j];
                            for(int k = j+1; k < 3; k++)
                                arr[i][k] = arr[i][k+1];
                            arr[i][0] = 0;
                        }
                    }
                }
                break;
            case 'R':
                for(int j = 3; j >= 1; j--){
                    for(int i = 0; i < 4; i++){
                        if(arr[i][j] == arr[i][j-1]){
                            arr[i][j] = 2*arr[i][j];
                            for(int k = j-1; k >= 1; k--)
                                arr[i][k] = arr[i][k-1];
                            arr[i][3] = 0;
                        }
                    }
                }
                break;
        }
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                if(j)
                    cout << " ";
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
/*
1
U
2 8 2 0
2 8 2 0
2 0 0 0
0 0 0 0

*/
