#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a!=0){
        int h,t,b;
        cin>>h >>t >>b;
        if(h>=200 && h<=300){
            if(t>=50){
                if(b>=150){
                    cout<<"Sim" <<endl;
                }
                else{
                    cout<<"Nao" <<endl;
                }
            }
            else{
                    cout<<"Nao" <<endl;
                }
        }
        else{
                cout<<"Nao" <<endl;
            }
        a--;
    }
    return 0;
}