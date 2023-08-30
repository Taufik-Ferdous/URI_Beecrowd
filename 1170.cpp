#include<iostream>
using namespace std;
int main(){
    int count=0,n;
    cin>>n;
    while(n!=0){
        float sum;
        cin>>sum;
        while(sum>1){
            sum=sum/2;
            count++;
        }
        
        n--;
        cout<<count <<" dias" <<endl;
        count=0;
    }
    
    return 0;
}