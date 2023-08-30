#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            break;

        int ar[a];
        int br[b];
        for (long long int i = 0; i < a; i++)
            cin >> ar[i];
        for (long long int i = 0; i < b; i++)
            cin >> br[i];

        long long int c = 1, ans = 0;
        if (a < b)
        {
            for (long long int i = 0; i < a; i++)
            {
                if (i != 0)
                {
                    if (ar[i] == ar[i - 1])
                        continue;
                }
                for (long long int j = 0; j < b; j++)
                {
                    if (ar[i] == br[j])
                    {
                        c = 0;
                    }
                }
                if (c == 1)
                    ans++;

                c = 1;
            }
        }
        else
        {
            for (long long int i = 0; i < b; i++)
            {
                if (i != 0)
                {
                    if (br[i] == br[i - 1])
                        continue;
                }
                for (long long int j = 0; j < a; j++)
                {
                    if (br[i] == ar[j])
                    {
                        c = 0;
                    }
                }
                if (c == 1)
                    ans++;

                c = 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}