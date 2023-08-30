#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        long long int n;
        cin>>n;
        int c=0;

        if(n==0){
            cout<<"Not Prime" <<endl;
            continue;
        }
        else if(n==1){
            cout<<"Not Prime" <<endl;
            continue;
        }
        else if(n==2){
            cout<<"Prime" <<endl;
            continue;
        }

        for(int i=2; i<sqrt(n)+1; i++){
            if(n%i==0){
                c=1;
                break;
            }
        }
        if(c==0){
            cout<<"Prime" <<endl;
        }
        else{
            cout<<"Not Prime" <<endl;
        }
    }
    return 0;
}