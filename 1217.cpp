#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, day=1;
    double money=0, amm=0;
    double ans1=0, ans2=0;

    cin>>n;
    m=n;

    while(n--){
        double price=0, kg=1;

        cin>>price;
        cin.ignore();


        string fruit;

        getline(cin, fruit);

        for(int i=0; i<fruit.length(); i++){
            if(fruit[i]==' '){
                kg++;
            }
        }

        cout<<"day " <<day <<": " <<kg <<" kg" <<endl;

        money+=price;
        amm+=kg;

        day++;
    }

    ans1=(amm/m);
    ans2=(money/m);

    cout<<fixed <<setprecision(2) <<ans1 <<" kg by day" <<endl;
    cout<<"R$ " <<fixed <<setprecision(2) <<ans2 <<" by day" <<endl;

    return 0;
}