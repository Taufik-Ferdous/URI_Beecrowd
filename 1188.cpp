#include<iostream>
using namespace std;
int main(){
    char in;
    cin>>in;
    
    double arr[12][12],sum=0;
    
    int i,j;
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            cin>>arr[i][j];
        }
    }

    int n=4;
    for(i=7; i<12; i++){
        for(j=5; j>n; j--){
            sum=sum+arr[i][j];
        }
        n--;
    }

    n=7;
    for(i=7; i<12; i++){
        for(j=6; j<n; j++){
            sum=sum+arr[i][j];
        }
        n++;
    }

    if(in=='S'){
        printf("%.1f\n",sum);
    }
    else{
        sum=sum/30;
        printf("%.1f\n",sum);
    }


    return 0;
}