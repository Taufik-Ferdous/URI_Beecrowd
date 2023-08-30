#include<iostream>
using namespace std;
int main(){
    long long int money;
    string cent;
    string note,coin;
    while(cin>>money){
        cin>>cent;

        if(cent.length()<2){
            coin= ".0" +cent;
        }
        else{
            coin= "." +cent;
        }
        if(money==0){
            coin="0"+coin;
        }
        while(money!=0){
            int temp=0;
            temp=money%1000;
            if(money>=1000 && temp<100){
                if(temp<10){
                    note=to_string(temp);
                    note="00"+note;
                }
                else{
                    note=to_string(temp);
                    note="0"+note;
                }
            }
            else{
                note=to_string(temp);
            }
            coin=note + coin;
            money=money/1000;
            if(money!=0){
                coin=","+coin;
            }
        }
        cout<<'$' <<coin <<endl;
    }
    return 0;
}