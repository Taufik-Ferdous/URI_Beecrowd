#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;

    while(cin>>a){
        int arr[a];

        for(int i=0; i<a; i++){
            cin>>arr[i];
        }

        int max=arr[0];

        for(int i=0; i<a; i++){
            for(int j=i+1; j<a; j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }

        for(int i=0; i<a; i++){
            cout<<setfill('0') <<setw(4) <<arr[i] <<endl;
        }

    }
    return 0;
}