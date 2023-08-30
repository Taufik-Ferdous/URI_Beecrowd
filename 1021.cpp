#include<bits/stdc++.h>
using namespace std;

int main(){
    int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0;

    double in;
    cin>>in;

    int note = in;

    double con = in - note;
    con *= 100;

    int coin = con;

    n100 = note/100;
    note %= 100;

    n50 = note/50;
    note %= 50;

    n20 = note/20;
    note %= 20;

    n10 = note/10;
    note %= 10;

    n5 = note/5;
    note %= 5;

    n2 = note/2;
    note %= 2;

    cout<<"NOTAS:" <<endl
    <<n100 <<" nota(s) de R$ 100.00" <<endl
    <<n50 <<" nota(s) de R$ 50.00" <<endl
    <<n20 <<" nota(s) de R$ 20.00" <<endl
    <<n10 <<" nota(s) de R$ 10.00" <<endl
    <<n5 <<" nota(s) de R$ 5.00" <<endl
    <<n2 <<" nota(s) de R$ 2.00" <<endl;

    int c100=0, c50=0, c25=0, c10=0, c5=0, c1=0;

    c100=note;

    c50 = coin/50;
    coin %= 50;
    
    c25 = coin/25;
    coin %= 25;
    
    c10 = coin/10;
    coin %= 10;
    
    c5 = coin/5;
    coin %= 5;
    
    c1 = coin;

    cout<<"MOEDAS:" <<endl
    <<c100 <<" moeda(s) de R$ 1.00" <<endl
    <<c50 <<" moeda(s) de R$ 0.50" <<endl
    <<c25 <<" moeda(s) de R$ 0.25" <<endl
    <<c10 <<" moeda(s) de R$ 0.10" <<endl
    <<c5 <<" moeda(s) de R$ 0.05" <<endl
    <<c1 <<" moeda(s) de R$ 0.01" <<endl;

    return 0;
}