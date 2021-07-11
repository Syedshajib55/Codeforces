#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tss;
    cin >> tss;
    while(tss--)
    {
        long long nss, kss;
        cin >> nss >> kss;
        if(nss % kss == 0)
        {
            cout << 1 << "\n";
        }
        else if(nss > kss)
        {
            cout << 2 << "\n";
        }
        else
        {
            if(kss % nss != 0)
            {
                cout << kss/nss+1 << "\n";
            }
            else
            {
                cout << kss/nss  << "\n";
            }
        }
    }
    return 0;
}
