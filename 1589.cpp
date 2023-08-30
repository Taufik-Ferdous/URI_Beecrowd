#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        int a,b,sum=0;
        cin>>a >>b;
        sum=a+b;
        cout<<sum <<endl;
        n--;
    }
    return 0;
}