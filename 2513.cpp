#include<iostream>
using namespace std;
int main(){
    string wall;
    while(cin>>wall){
        int num,i,j;
        cin>>num;
        int arr[num];
        for(i=0; i<num; i++){
            cin>> arr[i];
        }

        for(int i = 0; i < num; i++){
            cout<<wall[arr[i]-1];
        }
        cout<<endl;
    }
    return 0;
}