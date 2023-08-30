#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a >>b >>c;

    if(a==b){
        if(c>b){
            cout<<":)" <<endl;
        }
        else{
            cout<<":(" <<endl;
        }
    }

    else if(a>b){
        if(c>=b){
            cout<<":)" <<endl;
        }
        else{
            if((a-b)>(b-c)){
                cout<<":)" <<endl;
            }
            else if((a-b)<=(b-c)){
                cout<<":(" <<endl;
            }
        }
    }

    else if(a<b){
        if(b>=c){
            cout<<":(" <<endl;
        }
        else{
            if((b-a)<=(c-b)){
                cout<<":)" <<endl;
            }
            else if((b-a)>(c-b)){
                cout<<":(" <<endl;
            }
        }
    }
    return 0;
}