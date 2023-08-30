#include<bits/stdc++.h>
using namespace std;

int main(){
    int game=1;
    int team1=0, team2=0, draw=0;
    int input=0;

    
    int g1, g2;
    cin>>g1 >>g2;

    if(g1 > g2)
        team1++;
    else if(g2 > g1)
        team2++;
    else if(g1 == g2)
        draw++;

    cout<<"Novo grenal (1-sim 2-nao)" <<endl;

    while(cin>>input){
        if(input == 2)
            break;

        cin>>g1 >>g2;
        if(g1 > g2)
            team1++;
        else if(g2 > g1)
            team2++;
        else if(g1 == g2)
            draw++;
        game++;
        cout<<"Novo grenal (1-sim 2-nao)" <<endl;
    }
    cout<<game <<" grenais" <<endl;
    cout<<"Inter:" <<team1 <<endl;
    cout<<"Gremio:" <<team2 <<endl;
    cout<<"Empates:" <<draw <<endl;

    if(team1 > team2)
        cout<<"Inter venceu mais" <<endl;
    else if(team1 < team2)
        cout<<"Gremio venceu mais" <<endl;
    else
        cout<<"Não houve vencedor" <<endl;

    return 0;
}