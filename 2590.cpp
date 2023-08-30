#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        int a;
        cin>>a;
        
        int ans=0;

        if(a%4==1){
            ans=7;
        }
        else if(a%4==2){
            ans=9;
        }
        else if(a%4==3){
            ans=3;
        }
        else{
            ans=1;
        }

        cout<<ans <<endl;
    }
    return 0;
}