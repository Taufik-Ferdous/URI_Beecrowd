#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;

        else
        {
            while (n--)
            {

                int arr[5];
                for (int i = 0; i < 5; i++)
                    cin >> arr[i];

                int min = arr[0];
                int pos = 1;
                int count = 0;

                for (int i = 0; i < 5; i++)
                {
                    if (arr[i] < 128)
                    {
                        pos = i + 1;
                        count++;
                    }
                }

                if (count == 1)
                {
                    if (pos == 1)
                        cout << 'A' << endl;
                    else if (pos == 2)
                        cout << 'B' << endl;
                    else if (pos == 3)
                        cout << 'C' << endl;
                    else if (pos == 4)
                        cout << 'D' << endl;
                    else if (pos == 5)
                        cout << 'E' << endl;
                }
                else
                {
                    cout << '*' << endl;
                }
            }
        }
    }
    return 0;
}