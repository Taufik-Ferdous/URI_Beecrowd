#include<iostream>
using namespace std;
int main(){
    long long int x,y;
    while(cin>>x >>y){
        long long int xs=1,ys=1,sum,i,j;
        for(i=1; i<=x; i++){
            xs*=i;
        }
        for(j=1; j<=y; j++){
            ys*=j;
        }
        sum=xs+ys;
        cout<<sum <<endl;
    }
    return 0;
}