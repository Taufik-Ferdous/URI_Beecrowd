#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    while(cin>>a >>b >>c){
        if (a==b && b==c){
            cout<<'*' <<endl;
        }
        else if(a==b && a!=c){
            cout<<'C' <<endl;
        }
        else if(a==c && a!=b){
            cout<<'B' <<endl;
        }
        else if(c==b && b!=a){
            cout<<'A' <<endl;
        }
        else{
            cout<<'*' <<endl;
        }
    }
    return 0;
}