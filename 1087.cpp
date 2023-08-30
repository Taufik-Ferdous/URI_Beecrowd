#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d;

    while(cin>>a >>b >>c >>d){
        if(a==0 && b==0 && c==0 && d==0)
            return 0;

        else if(a==c && b==d)
            cout<<0 <<endl;

        else if(a==c || b==d)
            cout<<1 <<endl;

        else if(abs(a-c) == abs(b-d))
            cout<<1 <<endl;

        else
            cout<<2 <<endl;
    }
    return 0;
}