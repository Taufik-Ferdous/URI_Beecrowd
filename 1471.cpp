#include <iostream>
using namespace std;

int main()
{
    int went, came;

    while (cin >> went >> came)
    {
        int arr[went] = {}; // {1, 0, 3,0, 5}

        for (int i = 0; i < came; i++)
        {
            int a;
            cin >> a;
            arr[a - 1] = a;
        }
        if (came == went)
        {
            cout << "*";
        }
        else
        {

            for (int i = 0; i < went; i++)
            {
                if (arr[i] == 0)
                {
                    cout << i + 1 << " ";
                }
            }
        }

        cout << endl;
    }
}