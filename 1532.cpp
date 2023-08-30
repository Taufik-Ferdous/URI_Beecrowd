#include<bits/stdc++.h>
using namespace std;

int main(){

    int hole, power;
    while(cin>>hole >>power){

        if(hole==0 && power==0){
            return 0;
        }

        int goal= 0;
        int check=0;

        for(int i=power; i>0; i--){
            for(int j=0; j<i; j++){
                goal+=i;
                if(goal==hole){
                    check=1;
                }
            }
        }

        if(goal==hole){
            cout<<"possivel" <<endl;
        }
        else if(check==1){
            cout<<"possivel" <<endl;
        }
        else{
            cout<<"impossivel" <<endl;
        }
    }
    return 0;
}