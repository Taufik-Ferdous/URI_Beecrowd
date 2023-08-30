#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sums=0, sumb=0, suma=0;
    int scs=0, scb=0, sca=0;
    double saque=0, bloqueio=0, ataque=0;
    cin>>n;

    while(n--){
        string name;
        cin>>name;

        int s, b, a;
        cin>>s >>b >>a;
        sums+=s;
        sumb+=b;
        suma+=a;
        
        int ss, sb, sa;
        cin>>ss >>sb >>sa;
        scs+=ss;
        scb+=sb;
        sca+=sa;
    }
    saque=((double)scs/sums)*100;
    bloqueio=((double)scb/sumb)*100;
    ataque=((double)sca/suma)*100;

    cout<<"Pontos de Saque: " <<fixed <<setprecision(2) <<saque <<" %." <<endl;
    cout<<"Pontos de Bloqueio: " <<fixed <<setprecision(2) <<bloqueio <<" %." <<endl;
    cout<<"Pontos de Ataque: " <<fixed <<setprecision(2) <<ataque <<" %." <<endl;

    return 0;
}