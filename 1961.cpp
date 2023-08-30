#include<bits/stdc++.h>
using namespace std;

int main(){
    int pow, pipe;

    cin>>pow >>pipe;

    int arr[pipe];
    int count=1;

    for(int i=0; i<pipe; i++){
        cin>>arr[i];
    }

    for(int i=1; i<pipe; i++){
        if((arr[i]-arr[i-1]<=pow) && (arr[i]-arr[i-1]>=-pow)){
            count++;
        }
        else{
            break;
        }
    }

    if(count==pipe){
        cout<<"YOU WIN" <<endl;
    }
    else{
        cout<<"GAME OVER" <<endl;
    }

    return 0;
}