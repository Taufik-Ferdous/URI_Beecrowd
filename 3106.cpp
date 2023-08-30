#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int ans=0, st=0;

    while(n--){
        
        cin>>st;
        ans+=(st/3);
    }

    cout<<ans*3 <<endl;
    return 0;
}