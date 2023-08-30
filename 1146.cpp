#include<iostream>
using namespace std;
int main(){
    int a,i;
    
    while(cin>>a){
        if(a==0)
            return 0;

        for(i=1; i<a; i++){
            cout<<i <<' ';
        }
        cout<<i <<endl;
    }
    return 0;
}