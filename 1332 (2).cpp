#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        string num;
        cin>>num;

        if(num.length()==5){
            cout<<3 <<endl;
        }
        else{
            int ans=0;
            if(num[0] == 'o') ans++;
            if(num[1] == 'n') ans++;
            if(num[2] == 'e') ans++;
            
            if(ans>=2){
                cout<<1 <<endl;
            }
            else{
                cout<<2 <<endl;
            }
        }
        n--;
    }
    return 0;
}