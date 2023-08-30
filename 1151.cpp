#include<iostream>
using namespace std;
int main(){
    int n,first=0,second=1,fibo,count=0;
    cin>>n;
    while(count<n-1){
        if(count<=1){
            fibo=count;
        }
        else{
            fibo=first+second;
            first=second;
            second=fibo;
        }
        cout<<fibo <<' ';
        count++;
    }
    fibo=first+second;
    cout<<fibo <<endl;
    return 0;
}