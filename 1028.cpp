#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, a, b;
    int devident, divisor, c;

    scanf("%d", &n);
    for ( i = 0; i < n; ++i)

    {

        cin>>a >>b;
        if(b > a){
            devident = b;
            divisor = a;
        }

        else{
            devident = a;
            divisor = b;
        }

        while(devident % divisor != 0)
        {
            c = devident % divisor;
            devident = divisor;
            divisor = c;
        }
        cout<<divisor <<endl;
    }
    return 0;
}