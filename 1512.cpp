#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;

    while(cin>>t >>a >>b){
        if(t==0 && a==0 && b==0){
            return 0;
        }

        int g, l, count=0;
        g=__gcd(a,b);
        l=(a*b)/g;

        count=((t/a)+(t/b)-(t/l));
        
        cout<<count <<endl;
    }
    return 0;
}