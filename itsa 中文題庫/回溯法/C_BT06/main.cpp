#include <iostream>

using namespace std;
int n, m;
void dfs(){
    n = 0.25 * n;
    if(m > n)
        return;
    n += m;
    dfs();

}
int main()
{
    while(cin >> n >> m){
        dfs();
        cout << n << endl;
    }
    return 0;
}
