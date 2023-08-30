#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        string name;
        int pow;
        cin>>name >>pow;
        if (name=="Thor"){
            cout<<'Y' <<endl;
        }
        else{
            cout<<'N' <<endl;
        }
        n--;
    }
    return 0;
}
