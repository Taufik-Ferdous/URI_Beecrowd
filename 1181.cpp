#include<iostream>
using namespace std;
int main(){
    int ro;
    char in;
    cin>>ro >>in;
    int i,j;
    double arr[12][12];
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            cin>>arr[i][j];
        }
    }
    double sum=0;
    for(j=0; j<12; j++){
        sum=sum+arr[ro][j];
    }
    if(in=='S'){
        printf("%.1f\n",sum);
    }
    else{
        sum=sum/12;
        printf("%.1f\n",sum);
    }
    return 0;
}