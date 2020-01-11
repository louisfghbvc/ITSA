#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    printf("(%.2f)+(%.2f)i\n", a+c, b+d);
    printf("(%.2f)+(%.2f)i\n", a-c, b-d);
    printf("(%.2f)+(%.2f)i\n", a*c - b*d, b*c + a*d);
    return 0;
}
/*
-2.5 1
1 9.252
*/
