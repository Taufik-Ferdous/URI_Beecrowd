#include<iostream>
using namespace std;
int main(){
    string date;

    cin>>date;
    
    cout<<date[3] <<date[4]<<'/' <<date[0] <<date[1] <<'/'<<date[6] <<date[7] <<endl;
    cout<<date[6] <<date[7]<<'/' <<date[3] <<date[4] <<'/'<<date[0] <<date[1] <<endl;
    cout<<date[0] <<date[1]<<'-' <<date[3] <<date[4] <<'-'<<date[6] <<date[7] <<endl;
    return 0;
}