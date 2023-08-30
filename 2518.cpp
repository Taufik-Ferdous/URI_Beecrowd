#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int n;
    float height,length,wide,sum;
    while(cin>>n){
        cin>>height >>length >>wide;
        sum=(height*height)+(length*length);
        sum=sqrt(sum);
        sum=(float)wide*n*sum;
        sum=sum/10000;
        cout<<fixed <<setprecision(4) <<sum <<endl;
    }
    return 0;
}