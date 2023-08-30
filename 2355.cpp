#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long n;
    while(cin >> n){
        if(n == 0) break;
        double a = n/90.0;
        int b = floor(a*1);
        int g = ceil(a*7);
        cout << "Brasil " << b << " x Alemanha "<< g<< "\n";
    }


    return 0;
}
