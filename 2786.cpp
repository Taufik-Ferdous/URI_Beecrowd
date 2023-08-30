#include<bits/stdc++.h>
using namespace std;

int main(){
    int r, c;
    cin>>r >>c;

    int a, b;

    a = (r*c)+((r-1)*(c-1));
    b = ((r-1)*2+(c-1)*2);

    cout<<a <<endl <<b <<endl;

    return 0;
}