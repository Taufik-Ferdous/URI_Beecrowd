#include<bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    getline(cin, line);
    while (line[0] != '*')
    {
        transform(line.begin(), line.end(), line.begin(), ::toupper);
        int i, chk = 0;
        for (i = 0; i < line.length(); i++)
        {
            if (line[i] == ' ')
            {
                if (line[i + 1] != line[0])
                {
                    cout << 'N' << endl;
                    chk = 1;
                    break;
                }
            }
        }
        if (chk == 0)
        {
            cout << 'Y' << endl;
        }
        getline(cin, line);
    }
    return 0;
}