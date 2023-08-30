#include <bits/stdc++.h>
using namespace std;

void fibo(int input)
{
    int one = 0, call = 0, l = input;
    if (input == 0)
    {
        call++;
    }
    else if (input == 1)
    {
        one++;
        call++;
    }

    else
        fibo(input--);

    cout << "fib(" << l << ") = " << call << " calls = " << one << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;

        fibo(num);
    }

    return 0;
}