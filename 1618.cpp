#include<iostream>
using namespace std;
int main(){
    int test_case;
    cin>>test_case;
    while(test_case!=0){
        int a1,a2,b1,b2,c1,c2,d1,d2,x1,x2;
        cin>>a1 >>a2 >>b1 >>b2 >>c1 >>c2;
        cin>>d1 >>d2 >>x1 >>x2;
        
        if(x1>=a1 && x1<=b1&&
           x2>=a2 && x2<=d2){
            cout<<1 <<endl;
           }
           else{
            cout<<0 <<endl;
           }
        test_case--;
    }
    return 0;
}