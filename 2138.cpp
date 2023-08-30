#include<iostream>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        int num[10]={0};
        int i;
        for(i=0; i<s.length(); i++){
            if(s[i] == '0') num[0]++;
            else if(s[i] == '1') num[1]++;
            else if(s[i] == '2') num[2]++;
            else if(s[i] == '3') num[3]++;
            else if(s[i] == '4') num[4]++;
            else if(s[i] == '5') num[5]++;
            else if(s[i] == '6') num[6]++;
            else if(s[i] == '7') num[7]++;
            else if(s[i] == '8') num[8]++;
            else if(s[i] == '9') num[9]++;
        }
        int max=num[0];
        int ans=0;
        for(i=0; i<10; i++){
            if(max<=num[i]){
                max=num[i];
                ans=i;
            }
        }
        cout<<ans <<endl;
    }
    return 0;
}