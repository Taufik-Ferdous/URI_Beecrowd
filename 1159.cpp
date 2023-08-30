#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    while(cin>>x){
        if(x==0) return 0;
        int c=0, sum=0;
        for(int i=x; c<5; i++){
            if(i%2==0){
                sum+=i;
                c++;
            }
        }
        cout<<sum <<endl;
    }
}