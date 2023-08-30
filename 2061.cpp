#include<bits/stdc++.h>
using namespace std;

int main(){
    int tab=0, n=0;
    cin>>tab >>n;

    while(n--){
        string in;
        cin>>in;

        if(in == "fechou")
            tab++;
        else if(in == "clicou")
            tab--;
    }
    cout<<tab <<endl;
    return 0;
}