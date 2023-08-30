#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    float max;
    while(cin>>n){
        float arr[n];
        for(i=0; i<n; i++){
            cin>>arr[i];
        }
        max=arr[0];
        for(i=0; i<n; i++){
            if(arr[i]<max){
                max=arr[i];
            }
        }
        cout<<max <<endl;
    }
    return 0;
}