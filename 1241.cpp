#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        string a,b;
        cin>>a >>b;
        int len_a=a.length();
        int len_b=b.length();

        int ans=0,i,j;

        if(a==b){
            cout<<"encaixa" <<endl;
        }

        else{
            for(i=len_a, j=len_b; j>=0; i--, j--){
                if(a[i]!=b[j]){
                    cout<<"nao encaixa" <<endl;
                    ans=1;
                    break;
                }
            }
            if(ans==0){
                cout<<"encaixa" <<endl;
            }
        }
        n--;
    }
}