#include<bits/stdc++.h>
using namespace std;

int main(){
    string act;
    
    string 
    left="*--", right="--*", midr="-**",
    middle="-*-", midl="**-", allo="***",
    allc="---", caw="caw caw";

    int count=0, ans=0;

    while(count<3){
        getline(cin,act);

        if(act==left)
            ans+=4;

        else if(act==right)
            ans+=1;

        else if(act==midr)
            ans+=3;

        else if(act==midl)
            ans+=6;

        else if(act==middle)
            ans+=2;

        else if(act==allo)
            ans+=7;

        else if(act==allc)
            ans+=0;

        else if(act==caw){
            cout<<ans <<endl;
            ans=0;
            count++;
        }
    }

    return 0;
}