#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a, b, sum=0;
        cin>>a >>b;
        if(a>b){
            int temp = a;
            a=b;
            b=temp;
        }
        for(int i=a+1; i<b; i++){
            if(i%2 != 0)
                sum += i;
        }
        cout<<sum <<endl;
    }
    return 0;
}