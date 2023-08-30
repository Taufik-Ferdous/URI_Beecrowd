#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    float a=3.14159,b,c;
    cin>>b;
    c=a*b*b;
    cout<<"A=" << setprecision(4) <<fixed <<c <<endl;
    return 0;
}