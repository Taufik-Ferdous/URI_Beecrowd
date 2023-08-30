#include<bits/stdc++.h>
using namespace std;

int main(){
    double a;
    cin>>a;
    for(int i=0; i<100; i++){
        cout<<"N[" <<i <<"] = "
            <<setprecision(4) <<fixed <<a <<endl;
        a /= 2;
    }
}