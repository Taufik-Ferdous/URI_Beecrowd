#include<bits/stdc++.h>
using namespace std;
int main(){
    int in;
    cin>>in;

    long long int sum=3;

    if(in==0){
        cout<<1 <<endl;
    }

    else{
        for(int i=1; i<in; i++){
            sum*=3;
        }

        cout<<sum <<endl;
    }
    return 0;
}