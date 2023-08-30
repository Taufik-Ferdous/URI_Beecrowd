#include<iostream>
using namespace std;
int main(){
    string form;
    getline(cin, form);
    if(form.length()<=80){
        cout<<"YES" <<endl;
    }
    else{
        cout<<"NO" <<endl;
    }
    return 0;
}