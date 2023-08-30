#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5];
    char c = 't';

    for(int i=0; i<5; i++)
        cin>>a[i];

    if(a[1] > a[0]){
        for(int i=0; i<4; i++){
            if(a[i] > a[i+1]){
                c = 'N';
                break;
            }
        }
        if(c == 't')
            c = 'C';
    }
    else if(a[1] < a[0]){
        for(int i=0; i<4; i++){
            if(a[i] < a[i+1]){
                c = 'N';
                break;
            }
        }
        if(c == 't')
            c = 'D';
    }
    cout<<c <<endl;
    return 0;
}