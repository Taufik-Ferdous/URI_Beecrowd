#include <iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (count == n)
            count = 0;
        arr[i] = count++;
    }

    for (int i = 0; i < 1000; i++)
    {
        cout << "N[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}