#include<iostream>
using namespace std;
int main(){
    string line;
    while(cin>>line){
        int a,i;
        cin>>a;
        int read=0,write=0;
        for(i=0; i<line.length(); i++){
            if(line[i]=='R'){
                read++;
            }
            else{
                write++;
            }
        }
        if(write>read){
            cout<<write <<endl;
        }
        else{
            cout<<read <<endl;
        }
    }
    return 0;
}