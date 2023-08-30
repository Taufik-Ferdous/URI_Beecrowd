#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;

    cin>>a >>b;

    int c=a, d=b;

    int ans=0, lap=1;

    while(ans==0){
        if((d-c)>=b){
            ans=lap;
            break;
        }
        else{
            lap++;
            c+=a;
            d+=b;
        }
    }

    cout<<ans <<endl;

    return 0;
}