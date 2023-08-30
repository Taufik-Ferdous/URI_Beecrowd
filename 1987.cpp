#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int num, total=0, temp=0;
        int i;

        cin>>num;

        while(num>0){
            temp=num%10;
            total+=temp;
            num/=10;
        }

        if(total>0 && total%3==0){
            cout<<total <<" sim" <<endl;
        }
        else{
            cout<<total <<" nao" <<endl;
        }

    }
    return 0;
}