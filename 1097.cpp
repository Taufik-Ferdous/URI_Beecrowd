#include<bits/stdc++.h>
using namespace std;

int main(){
    int s = 7;

    for(int i=1; i<10; i += 2){
        for(int j=s; j>(s-3); j--){
            cout<<"I=" <<i <<" J=" <<j <<endl;
        }
        s += 2;
    }
    return 0;
}