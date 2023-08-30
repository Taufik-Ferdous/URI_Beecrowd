#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int year;
    while(cin>>year){
        int c=0,l=0,b=0;

        if(year%400==0){
            cout<<"This is leap year." <<endl;
            c=1;
            l=1;
        }
        if(year%100!=0 && year%4==0 && l==0){
            cout<<"This is leap year." <<endl;
            c=1;
        }

        if(year%15==0){
            cout<<"This is huluculu festival year." <<endl;
            c=1;
        }

        if(year%400==0 && year%55==0){
            cout<<"This is bulukulu festival year." <<endl;
            c=1;
            b=1;
        }
        if(year%100!=0 && year%4==0 && year%55==0 && b==0){
            cout<<"This is bulukulu festival year." <<endl;
            c=1;
        }

        if(c==0){
            cout<<"This is an ordinary year." <<endl;
        }
        cout<<endl;
    }
    return 0;
}