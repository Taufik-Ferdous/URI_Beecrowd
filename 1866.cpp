#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        int a,b=0;
        cin>>a;
        while(a!=0){
            if(b==0){
                b++;
            }
            else{
                b--;
            }
            a--;
        }
        cout<<b <<endl;
        n--;
    }
    return 0;
}