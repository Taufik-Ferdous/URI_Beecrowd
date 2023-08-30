#include<iostream>
using namespace std;
int main(){
    string sen;
    while(getline(cin, sen)){
        int len=sen.length();
        for (int i=0; i< len; i++){
            if(sen[i]==',' || sen[i]=='.'){
                if(sen[i-1]==' '){
                    sen.erase(i-1, 1);
                    len--;
                }
            }
        }
        cout<<sen <<endl;
    }
    return 0;
}