//square property. one 90 degree, four same side, side > 0
#include <bits/stdc++.h>  
  
using namespace std;  
  
double square(vector<pair<int, int>> &a){  
    double ab = sqrt(pow(a[0].first - a[1].first, 2) + pow(a[0].second - a[1].second, 2));  
    double ac = sqrt(pow(a[0].first - a[2].first, 2) + pow(a[0].second - a[2].second, 2));  
    double db = sqrt(pow(a[3].first - a[1].first, 2) + pow(a[3].second - a[1].second, 2));  
    double dc = sqrt(pow(a[3].first - a[2].first, 2) + pow(a[3].second - a[2].second, 2));  
  
    if(!(ab == ac && ac == db && db == dc))  
        return 0;  
    if(!ab && !ac && !db && !dc)  
        return 0;  
  
    pair<int, int> a2c = {a[0].first - a[1].first, a[0].second - a[1].second};  
    pair<int, int> a2b = {a[0].first - a[2].first, a[0].second - a[2].second};  
  
    if(!(a2c.first * a2b.first + a2c.second * a2b.second == 0))  
        return 0;  
  
    return ab * ab;  
}  
  
int main()  
{  
    int n;  
  
    while(cin >> n){  
        vector<pair<int, int>> a, b;  
        for(int i = 0; i < 8; i += 2){  
            int x, y;  
            cin >> x >> y;  
            a.push_back({x * n, y * n});  
        }  
        for(int i = 0; i < 8; i += 2){  
            int x, y;  
            cin >> x >> y;  
            b.push_back({x * n, y * n});  
        }  
        sort(a.begin(), a.end());  
        sort(b.begin(), b.end());  
  
        double a_ans = square(a), b_ans = square(b);  
  
        if(a_ans > 0)  
            cout << "Yes " << a_ans << endl;  
        else  
            cout << "No\n";  
        if(b_ans > 0)  
            cout << "Yes " << b_ans << endl;  
        else  
            cout << "No\n";  
  
        if(a_ans > b_ans)  
            cout << "A\n";  
        else if(a_ans < b_ans)  
            cout << "B\n";  
        else  
            cout << "Peace\n";  
    }  
  
    return 0;  
} 
