#include<bits/stdc++.h>
using namespace std;
int main(){
    int dr1,dr2,vs1,vs2,sum=0;
    cin>>dr1 >>dr2 >>vs1 >>vs2;
    int a,b,c,d;

    a=min(dr1,dr2);
    b=min(vs1,vs2);
    
    a+=b;

    c=min(max(dr1,dr2),max(vs1,vs2));

    d=min(a,c);

    sum=d*d;

    cout<<sum <<endl;
    return 0;
}