#include<bits/stdc++.h>
using namespace std;

int binary_to_decimal(int binary){
    int decimal=0, power=0;

    while(binary>0){
        int digit = binary % 10;
        decimal += digit * pow(2, power);
        power++;
        binary /= 10; 
    }
    return decimal;
}

int main(){
    int input;
    while(cin>>input){
        string line;
        while(input--){
            int binary;
            cin>>binary;
            int num = binary_to_decimal(binary);
            char ans = num;
            line += ans;
        }
        cout<<line <<endl;
    }
    return 0;
}