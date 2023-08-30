#include<iostream>
using namespace std;
int main(){
    string num,o={'1'},z={'0'};
    cin>>num;
    int count=0;
    for(int i=0; i<num.length(); i++){
        if(num[i]=='1'){
            count++;
        }
    }
    if(count%2!=0){
        cout<<num+o <<endl;
    }
    else{
        cout<<num+z <<endl;
    }
    return 0;
}