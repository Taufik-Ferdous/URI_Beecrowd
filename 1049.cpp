#include<iostream>
using namespace std;
int main(){
    string one,two,three;
    cin>>one >>two >>three;
    if(one=="vertebrado"){
        if(two=="mamifero"){
            if(three=="onivoro"){
                cout<<"homem" <<endl;
            }
            else{
                cout<<"vaca" <<endl;
            }
        }
        else{
            if(three=="onivoro"){
                cout<<"pomba" <<endl;
            }
            else{
                cout<<"aguia" <<endl;
            }
        }
    }

    else{
        if(two=="inseto"){
            if(three=="herbivoro"){
                cout<<"lagarta" <<endl;
            }
            else{
                cout<<"pulga" <<endl;
            }
        }
        else{
            if(three=="onivoro"){
                cout<<"minhoca" <<endl;
            }
            else{
                cout<<"sanguessuga" <<endl;
            }
        }
    }
    return 0;
}