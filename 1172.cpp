#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10];

    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    for(int i=0; i<10; i++){
        if(arr[i] <= 0) cout<<"X[" <<i <<"] = " <<1 <<endl;
        else cout<<"X[" <<i <<"] = " <<arr[i] <<endl;
    }
}