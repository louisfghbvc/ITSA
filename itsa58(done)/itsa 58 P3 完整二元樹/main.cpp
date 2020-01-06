#include <bits/stdc++.h>

using namespace std;
int c;
string str;
int arr[400];
int main()
{
    int m;
    cin >> m;
    while(m--){
        cin >> c;
        cin.ignore(1024, '\n');
        getline(cin, str);
        int t, id = 0;
        for(int i = 0; i < (int)str.size(); ++i){
            if(!isdigit(str[i]))
                continue;
            t = 0;
            while(isdigit(str[i])){
                t = t * 10 + (str[i] - '0');
                i++;
            }
            arr[id++] = t;
        }
        int cnt = id/2;
        bool f = 1;
        for(int i = 0; i < cnt; ++i){
            if(abs(arr[i] - arr[i * 2 + 1]) <= c){
                if(!f)
                    cout << " ";
                cout << char('A' + i) << char('A' + i * 2 + 1);
                f = 0;
            }
            if(abs(arr[i] - arr[i * 2 + 2]) <= c){
                if(!f)
                    cout << " ";
                cout << char('A' + i) << char('A' + i * 2 + 2);
                f = 0;
            }
        }
        cout << '\n';
    }
    return 0;
}
/**
2
8
(A,2),(B,10),(C,13)
7
(A,2),(B,10),(C,13),(D,7),(E,8),(F,9),(G,11)
*/
