#include<bits/stdc++.h>
using namespace std;
int main(){
    double ans;

    ans=3;
    int n;

    double ad=0;
    
    cin>>n;

    for(int i=0; i<n; i++){
        ad+=6;
        ad=1/ad;
    }

    cout<<fixed <<setprecision(10) <<ans+ad <<endl;

    return 0;
}