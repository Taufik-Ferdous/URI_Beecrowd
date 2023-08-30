#include<bits/stdc++.h>
using namespace std;
int main(){
    int team, match;

    while(cin>>team >>match){
        int Tpoint = match*3;
        int Gpoint = 0;

        if(team==0 && match==0){
            return 0;
        }

        while(team--){
            string team;
            cin>>team;
            int point;
            cin>>point;

            Gpoint += point; 
        }

        cout<<Tpoint-Gpoint <<endl;
    }
    return 0;
}