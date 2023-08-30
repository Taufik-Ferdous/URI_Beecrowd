#include<bits/stdc++.h>
using namespace std;

int main(){
    int size, req;

    while(cin>>size >>req){

        if(size==0 && req==0){
            return 0;
        }
        
        int arr[size], count=1, ans=0;

        for(int i=0; i<size; i++){
            cin>>arr[i];
        }

        sort(arr, arr+size);

        int start=arr[0];

        for(int i=1; i<size; i++){
            
            if(arr[i]==start){
                count++;
            }

            else{

                start=arr[i];

                if(count>=req){
                    ans++;
                }

                count=1;
            }

        }

        if(count>=req){
            ans++;
        }
        
        cout<<ans <<endl;
    }
    return 0;
}