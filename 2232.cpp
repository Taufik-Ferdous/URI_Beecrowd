#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    while(n--){
        long long int a, sum=0;
        cin>>a;

        for(int i=0; i<a; i++){
            sum+= pow(2,i);
        }

        cout<<sum <<endl;
    }
    return 0;
}