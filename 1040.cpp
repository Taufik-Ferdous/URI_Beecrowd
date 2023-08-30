#include<iostream>
using namespace std;
int main(){
    float a,b,c,d,e,sum;
    cin>>a >>b >>c >>d;
    a*=2, b*=3, c*=4, d*=1;
    sum=(a+b+c+d)/10;
    cout <<"Media: " <<sum <<endl;

    if(sum>=5 && sum<7){
        cin>>e;
        cout<<"Aluno em exame." <<endl;
        cout<<"Nota do exame: " <<e <<endl;
        sum=(sum+e)/2;
        if(sum>=5){
            cout<<"Aluno aprovado." <<endl;
        }
        else{
            cout<<"Aluno reprovado." <<endl <<"Media final: "<<sum <<endl;
        }
        
    }

    else if(sum>=7)
    cout<<"Aluno aprovado." <<endl;

    else if(sum<5)
    cout<<"Aluno reprovado." <<endl;
    return 0;
}