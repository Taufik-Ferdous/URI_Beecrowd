#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;

    while(n--){
        long long int a, b, sum=0, i;
        cin>>a >>b;
        for(i=a; b>0; i++){
            if(i%2 != 0){
                sum += i;
                b--;
            }
        }
        cout<<sum <<endl;
    }
}