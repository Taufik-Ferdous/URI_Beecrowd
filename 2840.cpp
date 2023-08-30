#include<iostream>
using namespace std;
int main(){
    int rad,gas,ans;
    float vol;
    cin>>rad >>gas;
    vol=(((float)4/3)*(3.1415*rad*rad*rad));
    ans=(gas/vol);
    cout<<ans <<endl;
    return 0;
}