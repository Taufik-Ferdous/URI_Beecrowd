#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int len,wid,r1,r2,r,ra,rb;
    cin>>wid >>len >>r1 >>r2;
    while(wid!=0 && len!=0 && r1!=0 && r2!=0){
        ra=2*r1;
        rb=2*r2;
        r=ra+rb;

        if(wid>=ra && wid>=rb){
            if(len>=ra && len>=rb){
                if(wid>=r){
                    cout<<'S' <<endl;
                }
                else{
                    cout<<'N' <<endl;
                }
            }
            else if(len>=r){
                cout<<'S' <<endl;
            }
            else{
                cout<<'N' <<endl;
            }
        }
        else{
            cout<<'N' <<endl;
        }
        cin>>wid >>len >>r1 >>r2;
    }    
    return 0;
}