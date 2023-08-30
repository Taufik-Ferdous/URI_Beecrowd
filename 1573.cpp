#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        int a,b,c,ans;
        cin>>a >>b >>c;

        if(a==0 && b==0 && c==0) break;

        ans=cbrt(a*b*c);

        cout<<ans <<endl;
    }
    return 0;
}