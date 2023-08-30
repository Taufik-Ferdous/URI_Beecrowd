#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    while(n--){
        string a,b;
        cin>>a >>b;
        int i,j;

        for(i=0, j=0; i<a.length() || j<b.length(); i++, j++){
            if(i<a.length()) cout<<a[i];
            
            if(j<b.length()) cout<<b[i];
        }
        cout<<endl;
    }
    return 0;
}