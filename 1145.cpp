#include<iostream>
using namespace std;
int main(){
    int i,j,n,x,b=0;
    cin>>n >>x;
    for(i=1; i<=x; i++){
        if(b==n){
            cout<<endl;
            b=0;
        }
        if(b==n-1){
            cout<<i;
        }
        else{
            cout<<i <<' ';
        }
        b++;
    }
    cout<<endl;
return 0;
}