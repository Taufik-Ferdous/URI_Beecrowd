#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a >>b;
    while(a!=0 && b!=0){
        c=b-a;
        if(c>100){
            d=c-100;
            if(d==2||d==5||d==10||d==20||d==50||d==100){
                cout<<"possible" <<endl;
            }
            else{
                cout<<"impossible" <<endl;
            }
        }
        else if(c<=100 && c>50){
            d=c-50;
            if(d==2||d==5||d==10||d==20||d==50){
                cout<<"possible" <<endl;
            }
            else{
                cout<<"impossible" <<endl;
            }
        }
        else if(c<=50 && c>20){
            d=c-20;
            if(d==2||d==5||d==10||d==20){
                cout<<"possible" <<endl;
            }
            else{
                cout<<"impossible" <<endl;
            }
        }
        else if(c<=20 && c>10){
            d=c-10;
            if(d==2||d==5||d==10){
                cout<<"possible" <<endl;
            }
            else{
                cout<<"impossible" <<endl;
            }
        }
        else if(c<=10 && c>5){
            d=c-5;
            if(d==2||d==5){
                cout<<"possible" <<endl;
            }
            else{
                cout<<"impossible" <<endl;
            }
        }
        else if(c<=5 && c>2){
            d=c-2;
            if(d==2){
                cout<<"possible" <<endl;
            }
            else{
                cout<<"impossible" <<endl;
            }
        }
        
        else{
            cout<<"impossible" <<endl;
        }
        cin>>a >>b;
    }
    return 0;
}