#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, count = 0, sum = 0;
    while (count < 2)
    {
        cin >> n;

        if (n > 10 || n < 0)
            cout << "nota invalida" << endl;
        else{
            count++;
            sum += n;
        }
    }
    cout << "media = " << fixed << setprecision(2) << (sum /= 2) << endl;
    return 0;
}