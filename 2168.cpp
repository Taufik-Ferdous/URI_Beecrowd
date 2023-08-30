#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row=n+1;

    int arr[row][row];

    for(int i=0; i<row; i++){
        for(int j=0; j<row; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i][j+1])>1){
                cout<<'S';
            }
            else{
                cout<<'U';
            }
        }
        cout<<endl;
    }
    return 0;
}