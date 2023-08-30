#include<iostream>
using namespace std;
int main(){
    int a,b,c=0,sum=0,i;
    cin>>a >>b;
    while(a>0 && b>0){
        if(a>b){
            c=a;
            a=b;
            b=c;
        }
        for(i=a; i<=b; i++){
            cout<<i <<' ';
            sum=sum+i;
        }
        cout<<"Sum=" <<sum <<endl;
        sum=0;
        cin>>a >>b;
    }
    return 0;
}