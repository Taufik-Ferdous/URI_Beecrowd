#include<iostream>
using namespace std;
int main(){
    long long int i,a,n,arr[61];
    cin>>n;
    arr[0]=0;
    arr[1]=1;
    for(i=2; i<61; i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    while(n!=0){
        cin>>a;
        cout<<"Fib(" <<a <<") = " <<arr[a] <<endl;
        n--;
    }
    return 0;
}