#include<bits/stdc++.h>
using namespace std;

void prntP(int a[5], int k){
    for(int i=0; i<k; i++){
        cout<<"par[" <<i <<"] = " <<a[i] <<endl;
    }
}
void prntIP(int b[5], int k){
    for(int i=0; i<k; i++){
        cout<<"impar[" <<i <<"] = " <<b[i] <<endl;
    }
}

int main(){
    int n=15;
    int a[5], b[5];
    int aP=0, bP=0;
    while(n--){
        int x;
        cin>>x;
        if(x%2==0){
            a[aP] = x;
            ++aP;
            if(aP==5){
                prntP(a, aP);
                aP=0;
            }
        }
        else{
            b[bP] = x;
            ++bP;
            if(bP==5){
                prntIP(b, bP);
                bP=0;
            }
        }
    }
    prntIP(b, bP);
    prntP(a, aP);
}