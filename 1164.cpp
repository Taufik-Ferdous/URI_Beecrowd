#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){

        int sum=0;

        int a;
        cin>>a;

        for(int i=1; i<a; i++){
            if(a%i==0){
                sum+=i;
            }
        }

        if(sum==a){
            cout<<a <<" eh perfeito" <<endl;
        }
        else{
            cout<<a <<" nao eh perfeito" <<endl;
        }
        sum=0;
    }
    return 0;
}