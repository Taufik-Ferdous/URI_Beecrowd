#include<iostream>
using namespace std;
int main(){
    int i,a,sum;
    cin>>a;
    int arr[10];
    for(i=0; i<10; i++){
        arr[i]=a;
        a*=2;
        cout<<"N[" <<i <<"] = " <<arr[i] <<endl;
    }
    return 0;
}
