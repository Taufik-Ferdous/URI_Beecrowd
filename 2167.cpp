#include<iostream>
using namespace std;
int main(){
    int n,i,count=1,ch=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=0; i<n-1; i++){
        if(a[i]<=a[i+1]){
            count++;
        }
        else{
            cout<<count+1 <<endl;
            ch++;
            break;
        }
    }
    if(ch==0){
        cout<<0 <<endl;
    }
    return 0;
}