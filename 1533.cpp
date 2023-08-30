#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        int a[n], i;

        //Array input
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        //Finding max
        int ans=0, max=a[0];
        for(i=0; i<n; i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        //Making max 0
        for(i=0; i<n; i++){
            if(a[i]==max){
                a[i]=0;
            }
        }
        //Finding new max
        i=0;
        max=a[i];
        for(i=0; i<n; i++){
            if(a[i]>=max){
                max=a[i];
                ans=i+1;
            }
        }
        //Printing ans
        cout<<ans <<endl;
        cin>>n;
    }
    return 0;
}