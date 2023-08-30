#include<iostream>
using namespace std;
int main(){
    int n,ca=1;
    cin>>n;
    while(n!=0){
        int i, ans, size;
        cin>>size;
        int array[size];
        for(i=0; i<size; i++){
            cin>>array[i];
        }
        ans=size/2;
        cout<<"Case " <<ca <<": " <<array[ans] <<endl;
        ca++;
        n--;
    }
    return 0;
}