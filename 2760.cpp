#include<iostream>
using namespace std;
int my(string a){
    int i;
    for(i=0; i<10; i++){
        cout<<a[i];
    }
}


int main(){
    string a,b,c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    
    cout<<a+b+c <<endl;
    cout<<b+c+a <<endl;
    cout<<c+a+b <<endl;
    
    if(a.length()<=10){
        cout<<a;
    }
    else{
        my(a);
    }
    if(b.length()<=10){
        cout<<b;
    }
    else{
        my(b);
    }
    if(c.length()<=10){
        cout<<c;
    }
    else{
        my(c);
    }
    cout<<endl;
    
    return 0;
}