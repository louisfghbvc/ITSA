//just math, or you can for loop to solve
#include <bits/stdc++.h>  
  
using namespace std;  
  
int main()  
{  
    int m;  
    double o1 = 10.0, o2 = 10.0, x, y;  
    cin >> m;  
    while(m--){  
        cin >> x >> y;  
        double dis = sqrt((x - o1) * (x - o1) + (y - o2) * (y - o2));  
        if(dis != 0.0 && dis == int(dis)){  
            dis--;  
        }  
        if(dis > 9){  
            cout << 0 << endl;  
            continue;  
        }  
        cout << 10 - (int)dis << endl;  
    }  
    return 0;  
}  
