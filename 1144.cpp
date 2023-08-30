#include<iostream>
using namespace std;
int main(){
    int i,j,a=1,b=1,c=1,n;
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=0; j<2; j++){
            cout<<a <<' ' <<b <<' ' <<c <<endl;
            b+=1,c+=1;
        }
        a+=1, b=a*a, c=a*a*a;
    }
return 0;
}