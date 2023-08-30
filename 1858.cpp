#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int pos = 1, min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
            pos = i+1;
        }
    }
    cout<<pos <<endl;
    return 0;
}