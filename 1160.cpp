#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    while(n--){
        int year=0, i, j;
        int cen=0;

        double inc;

        int p1, p2;
        double r1, r2;

        cin>>p1 >>p2;
        cin>>r1 >>r2;

        for(i=0; year<=101; i++){
            if(p1>p2){
                break;
            }
            year++;

            p1=p1+(((float)r1*p1)/100);
            p2=p2+(((float)r2*p2)/100);

            if(year>=101){
                cen=1;
            }
        }

        if(cen==1){
            cout<<"Mais de 1 seculo." <<endl;
        }
        else{
            cout<<year <<" anos." <<endl;
        }
    }
    return 0;
}