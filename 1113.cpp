#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    while(cin>>a >>b){
        if(a > b)
            cout<<"Decrescente" <<endl;
        else if(b>a)
            cout<<"Crescente" <<endl;
        else
            return 0;
    }
    return 0;
}