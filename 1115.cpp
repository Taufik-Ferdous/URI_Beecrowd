#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    while(cin>>a >>b){
        if(a==0 || b==0){
            return 0;
        }

        if(a>0 && b>0)
            cout<<"primeiro" <<endl;

        else if(a<0 && b>0)
            cout<<"segundo" <<endl;

        else if(a>0 && b<0)
            cout<<"quarto" <<endl;

        else
            cout<<"terceiro" <<endl;
    }
    return 0;
}