#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    int n;
    cin>>n;
    cin.ignore();
    while(n--){

        getline(cin, line);

        int mid = line.length()/2;

        int i;
        for(i=mid-1; i>=0; i--){
            cout<<line[i];
        }
        
        for(i=line.length()-1; i>=mid; i--){
            cout<<line[i];
        }
        cout<<endl;
    }
    return 0;
}
