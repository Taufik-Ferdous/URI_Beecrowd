#include<iostream>
using namespace std;

void lulu(string a){

    int len=a.length();
    int upr=0, lwr=0, num=0, spc=0, pun=0;
    int i;

    if(len>=6 && len<=32){
        for(i=0; i<len; i++){
            if(a[i]>='a' && a[i]<='z'){
                lwr=1;
            }

            else if(a[i]>='A' && a[i]<='Z'){
                upr=1;
            }

            else if(a[i]>='0' && a[i]<='9'){
                num=1;
            }

            else if(a[i]==' '){
                spc=1;
            }
           
           else{
                pun=1;
           }
        }

        if(upr + lwr + num == 3 && spc!=1 && pun!=1){
            cout << "Senha valida." << endl;
        }
        else{
            cout << "Senha invalida." << endl;
        }

    }

    else{
        cout << "Senha invalida." << endl;
    }
}

int main(){
    string line;
    while(getline(cin, line)){
        lulu(line);
    }
    return 0;
}
