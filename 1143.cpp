#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    cin>>n;
    a = 1;

    while(n--){
        cout<<a <<' ' <<a*a <<' ' <<a*a*a <<endl;
        a++;
    }
    return 0;
}