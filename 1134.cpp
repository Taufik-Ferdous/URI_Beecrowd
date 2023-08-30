#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int al=0, gas=0, di=0;
    while(true){
        cin>>n;

        if(n == 4)
            break;
        else if(n == 1)
            al++;
        else if(n == 2)
            gas++;
        else if(n == 3)
            di++;
    }
    cout<<"MUITO OBRIGADO" <<endl;
    cout<<"Alcool: " <<al <<endl;
    cout<<"Gasolina: " <<gas <<endl;
    cout<<"Diesel: " <<di <<endl;
    return 0;
}