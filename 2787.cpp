#include<iostream>
using namespace std;
int main(){
    int r,c,ans;
    cin>>r >>c;
    if(r%2!=0){
        if(c%2!=0)
            ans=1;
        else
            ans=0;
    }
    else{
        if(c%2!=0)
            ans=0;
        else
            ans=1;
    }
    cout<<ans <<endl;
    return 0;
}