#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, n;
    cin>>a;
    
    cin>>n;
    if(n<=0){
        while(n<=0){
            cin>>n;
        }
    }

    int sum = 0;
    while(n--){
        sum += a;
        a++;
    }
    cout<<sum <<endl;
    return 0;
}