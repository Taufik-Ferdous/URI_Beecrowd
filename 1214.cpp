#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;

        int arr[a];
        double av=0;
        for(int i=0; i<a; i++){
            cin>>arr[i];
            av+=arr[i];
        }
        av=av/a;

        double ans;
        int count=0;

        for(int i=0; i<a; i++){
            if(arr[i]>av){
                count++;
            }
        }

        ans=((double)count/a)*100;

        cout<<fixed <<setprecision(3) <<ans <<'%' <<endl;
    }
    return 0;
}