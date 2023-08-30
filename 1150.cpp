#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a >>b;
    if(b<=a){
        while(b<=a){
            cin>>b;
        }
    }
    int sum=a, ans=1;
    for(int i=a+1; sum<=b; i++){
        sum += i;
        ans++;
    }
    cout<<ans <<endl;
    return 0;
}