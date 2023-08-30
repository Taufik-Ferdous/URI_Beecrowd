#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        int size = 0;
        char side = 'z';
        int left[31] = {0};
        int right[31] = {0};
        while (n--)
        {
            cin >> size >> side;

            if (side == 'D')
                right[size - 30]++;
            else
                left[size - 30]++;
        }

        int ans = 0;
        for (int i = 0; i < 31; i++)
        {
            if (left[i] < right[i])
                ans += left[i];
            
            else
                ans += right[i];
        }

        cout<<ans <<endl;
    }
    return 0;
}