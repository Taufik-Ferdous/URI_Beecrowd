#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=0, b=0;
    int d=0, r=0;

    cin >> a >> b;
    if (a >= 0)
    {
        d = a / b;
        r = a % b;
    }
    
    else{
        d = a / b;
        d--;
        r = a - (b * d);
    }
    

    cout << d << ' ' << r << endl;
    return 0;
}