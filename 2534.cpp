#include <iostream>
using namespace std;
int main()
{
     int len, q;
   while( cin >> len>> q){
   
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
           if(arr[i] < arr[j]){
             int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
           }
        }
    }

    while(q--){
     int p;
     cin>> p;
     cout<< arr[p-1]<<endl;
    }
   
   
   }

    return 0;
}