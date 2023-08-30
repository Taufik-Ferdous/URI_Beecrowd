#include<bits/stdc++.h>
using namespace std;
int main(){
    double old, nw, ans;
    cin>>old >>nw;

    ans=(nw-old)*100;
    ans=ans/old;

    cout<<fixed <<setprecision(2) <<ans <<'%' <<endl;
    return 0;
}