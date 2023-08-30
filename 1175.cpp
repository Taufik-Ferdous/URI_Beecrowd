#include<iostream>
using namespace std;
int main(){
    int i,j,arr[20],swap=0;
    for(i=0; i<20; i++){
        cin>>arr[i];
    }
    i=0,j=19;
    while(i<=j){
        swap=arr[i];
        arr[i]=arr[j];
        arr[j]=swap;
        i++,j--;
    }
    for(i=0; i<20; i++){
        cout<<"N[" <<i <<"] = " <<arr[i] <<endl;
    }
    return 0;
}
