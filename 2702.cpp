#include<iostream>
using namespace std;
int main(){
    int a1,b1,c1,a2,b2,c2,s1=0,s2=0,s3=0,sum;
    cin>>a1 >>b1 >>c1;
    cin>>a2 >>b2 >>c2;
    if(a1<a2){
        s1=a2-a1;
    }
    if(b1<b2){
        s2=b2-b1;
    }
    if(c1<c2){
        s3=c2-c1;
    }
    sum=s1+s2+s3;
     cout<<sum <<endl;
     return 0;
}