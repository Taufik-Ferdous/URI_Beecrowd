#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row >>col;
    int arr[row][col];
    int i, j;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    
    int count=0;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if(arr[i][j]==42){
                if(arr[i-1][j-1]==7 && arr[i-1][j]==7 && arr[i-1][j+1]==7 && arr[i][j-1]==7 && arr[i][j+1]==7 && arr[i+1][j-1]==7 && arr[i+1][j]==7 && arr[i+1][j+1]==7){
                    cout<<i+1 <<' ' <<j+1 <<endl;
                    count++;
                }
            }
        }
    }
    if(count==0){
        cout<<0 <<' ' <<0 <<endl;
    }

    return 0;
}