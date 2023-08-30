#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int c=0, r=0, s=0;

    while(n--){
        int in;
        cin>>in;

        char nam;
        cin>>nam;

        if(nam == 'C')
            c += in;

        else if(nam == 'R')
            r += in;

        else if(nam == 'S')
            s += in;
    }
    long long int animal= s + r + c;

    cout<<"Total: " <<animal <<" cobaias" <<endl;
    cout<<"Total de coelhos: " <<c <<endl;
    cout<<"Total de ratos: " <<r <<endl;
    cout<<"Total de sapos: " <<s <<endl;

    double sap = (double)(s*100)/animal;
    double col = (double)(c*100)/animal;
    double rat = (double)(r*100)/animal;
        
    cout<<"Percentual de coelhos: " <<fixed <<setprecision(2) <<col <<" %" <<endl;
    cout<<"Percentual de ratos: "  <<fixed <<setprecision(2) <<rat <<" %" <<endl;
    cout<<"Percentual de sapos: "  <<fixed <<setprecision(2) <<sap <<" %" <<endl;
    
    return 0;
}