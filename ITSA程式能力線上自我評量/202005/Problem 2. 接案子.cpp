// Simulate. Sort. Maintain array.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; ++i){
        int id, san;
        cin >> id >> san;
        arr.push_back(san);
    }
    sort(arr.begin(), arr.end());

    vector<int> gg;
    for(int i = 0; i < 6; ++i){
        gg.push_back(arr.back());
        arr.pop_back();
    }

    int sum = 0;
    while(gg.size() == 6){
        int bye = gg.back(); gg.pop_back();
        sum += bye*5;
        vector<int> next_gg;
        
        for(int i = 0; i < gg.size(); ++i){
            gg[i] -= bye;
            if(gg[i]) next_gg.push_back(gg[i]);
        }

        while(next_gg.size() < 6){
            if(arr.empty()) break;
            next_gg.push_back(arr.back()); arr.pop_back();
        }
        
        sort(next_gg.rbegin(), next_gg.rend());
        gg = next_gg;
    }
    cout << sum << "\n";
    return 0;
}
/**
7
1 5
2 9
3 10
4 3
5 3
6 6
7 6
**/
