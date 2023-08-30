#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    while(n--){
        long long int num=0, c=0, ans=0;
        long long int i;
        cin>>num;
        
        c= 1 + 8*num;
        ans= (sqrt(c)-1)/2;
        cout<<ans <<endl;
    }
    return 0;
}