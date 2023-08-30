#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    while(x--){
        long long int a, b;
        cin>>a >>b;
        long long int c=0, sum=0;

        for(int i=a; c<b; i++){
            if(i%2==1){
                sum+=i;
                ++c;
            }
        }
        cout<<sum <<endl;
    }
}