#include<iostream>
using namespace std;
int main(){
    char a,i;
    int count=1;
    cin>>a;
    for(i='A';i!=a; i++){
        count++;
    }
    cout<<count <<endl;
    return 0;
}