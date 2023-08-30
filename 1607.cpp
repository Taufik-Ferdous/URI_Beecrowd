#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {

        string fst, sec;
        int ans = 0;

        cin>>fst >>sec;

        for (int i=0; i<sec.length(); i++)
        {
            if(fst[i] > sec[i]){
                int a=(26-fst[i])+sec[i];
                ans+=a;
            }

            else{
                ans+=abs(fst[i] - sec[i]);
            }
        }

        cout<<ans <<endl;
    }

    return 0;
}