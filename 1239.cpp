#include <iostream>
using namespace std;
int main()
{
    string line;
    while (getline(cin, line))
    {
        int j, i = 0, b = 0;
        for (j = 0; j < line.length(); j++)
        {
            if (line[j] == '_')
            {
                if (i % 2 != 0)
                {
                    line.erase(j, 1);
                    line.insert(j, "</i>");
                }
                else
                {
                    line.erase(j, 1);
                    line.insert(j, "<i>");
                }
                i++;
            }
            else if (line[j] == '*')
            {
                if (b % 2 != 0)
                {
                    line.erase(j, 1);
                    line.insert(j, "</b>");
                }
                else
                {
                    line.erase(j, 1);
                    line.insert(j, "<b>");
                }
                b++;
            }
        }
        cout << line << endl;
    }

    return 0;
}
