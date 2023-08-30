#include<iostream>
using namespace std;
int main(){
    char in;
    cin>>in;
    double arr[12][12];
    int i,j;
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            cin>>arr[i][j];
        }
    }

    double sum=0;
    for(i=0; i<12; i++){
        for(j=i+1; j<12; j++){
            sum=sum+arr[i][j];
        }
    }
    if(in=='S'){
        printf("%.1f\n",sum);
    }
    else{
        sum=sum/66;
        printf("%.1f\n",sum);
    }

    return 0;
}