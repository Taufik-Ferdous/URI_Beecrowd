#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr, arr+n);

        int pep, min;

        pep=n/2;

        min=arr[pep]-arr[pep-1];

        cout<<pep <<" " <<min <<endl;

    }
    return 0;
}