#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        double a, b;

        cin>>a;
        while(a<0 || a>10){
            cout<<"nota invalida" <<endl;
            cin>>a;
        }

        cin>>b;
        while(b<0 || b>10){
            cout<<"nota invalida" <<endl;
            cin>>b;
        }

        double sum = (a+b)/2;
        cout<<fixed <<setprecision(2) <<"media = " <<sum <<endl;

        int c = 0;
        while(c>2 || c<1){
            cout<<"novo calculo (1-sim 2-nao)" <<endl;
            cin>>c;
        }
        if(c == 1)
            continue;
        return 0;
    }
}