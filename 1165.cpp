#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        int in, ck=0;
        cin>>in;

        for(int i=2; i<=sqrt(in); i++){
            if(in % i == 0){
                cout<<in <<" nao eh primo" <<endl;
                ck++;
                break;
            }
        }
        if(ck == 0){
            cout<< in <<" eh primo" <<endl;
        }
    }
    return 0;
}