#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
    int a,b,sum;
    cin>>a >>b;
    sum=.5*a*b;
    cout<<sum <<" cm2" <<endl;
    n--;
    }
    return 0;
}