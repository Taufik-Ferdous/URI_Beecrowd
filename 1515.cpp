#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(cin>>n){

        if(n==0)
            return 0;

        int year, time;
        int pre=10000;
        string planet, ans;

        for(int i=0; i<n; i++){
            cin>>planet;

            cin>>year;
            cin>>time;

            if(year-time<pre){
                ans=planet;
                pre=year-time;
            }
        }
        cout<<ans <<endl;
    }
    return 0;
}