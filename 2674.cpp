#include<bits/stdc++.h>
using namespace std;

bool p(int n){
    if(n==0 || n==1) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}

bool sp(int n){
    while(n!=0){
        int rem = n%10;
        if(!p(rem)) return false;
        n /= 10;
    }
    return true;
}

int main(){
    int n;
    while(cin>>n){
        if(p(n) && sp(n)) cout<<"Super" <<endl;
        else if(p(n)) cout<<"Primo" <<endl;
        else cout<<"Nada" <<endl;
    }
}