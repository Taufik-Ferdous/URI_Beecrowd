#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        string s;
        cin>>s;
        int l;
        l=s.length();
        double time;
        time=(double)l/100;
        cout<<fixed <<setprecision(2) <<time <<endl;
        n--;
    }
    return 0;
}