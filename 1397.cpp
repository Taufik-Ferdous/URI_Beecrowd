#include<iostream>
using namespace std;
int main(){
    int nn,n,ca=0,cb=0;
    cin>>nn;
    while(nn!=0){
        n=nn;
        ca=0,cb=0;
        while(n!=0){
            int a=0,b=0;
            cin>>a >>b;
            if(a>b){
                ca++;
            }
            else if(b>a){
                cb++;
            }
            n--;
        }
        cout<<ca <<' ' <<cb <<endl;
        cin>>nn;
    }
    return 0;
}