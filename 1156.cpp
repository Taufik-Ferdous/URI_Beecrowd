#include<bits/stdc++.h>
using namespace std;

int main(){
    double sum=1;

    for(double i=3, j=2; i<40; i+=2, j*=2){
        sum += (i/j);
    }
    cout<<sum <<endl;
}