#include <bits/stdc++.h>
using namespace std;

void lulu(string a){

    int len;
    len=a.length();
    int i;
    if(a[0]>='a' && a[0]<='z'){
    cout<<a[0];
    }

    for(i=1; i<len; i++){
        if(a[i]>='a' && a[i]<='z'){
            if(a[i-1]<'a' || a[i-1]>'z'){
                cout<<a[i];
            }
        }
    }

}

int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string line;
        getline(cin, line);
        lulu(line);
        cout<<endl;
    }
    return 0;
}