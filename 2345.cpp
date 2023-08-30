#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4];

    cin>>arr[0] >>arr[1] >>arr[2] >>arr[3];

    sort(arr, arr+4);

    int sum1=arr[0]+arr[3];
    int sum2=arr[1]+arr[2];

    int ans;
    
    cout<< (abs(sum1-sum2)) <<endl;
    return 0;
}