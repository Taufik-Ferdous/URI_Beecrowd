#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        string num;
        cin>>num;
        int i,sum=0;
        for(i=0; i<num.length(); i++){
            if(num[i]=='1'){
                sum=sum+2;
            }
            else if(num[i]=='2' || num[i]=='3' || num[i]=='5'){
                sum=sum+5;
            }
            else if(num[i]=='6' || num[i]=='9' || num[i]=='0'){
                sum=sum+6;
            }
            else if(num[i]=='4'){
                sum=sum+4;
            }
            else if(num[i]=='7'){
                sum=sum+3;
            }
            else if(num[i]=='8'){
                sum=sum+7;
            }
        }
        cout<<sum <<" leds" <<endl;
        n--;
    }
    return 0;
}