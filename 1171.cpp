#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
           if(arr[i] > arr[j]){
             int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
           }
        }
    }
    // 4 8 8 10 10 10 260
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
        }
        else
        {
            cout << arr[i-1] << " aparece " << count << " vez(es)" << endl;
            count = 1;
        }
    }

    return 0;
}