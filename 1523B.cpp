#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll nss;
        cin >> nss;
        vector<ll> vcss(nss+5);
        for (int i = 0; i < nss; i++)
        {
            cin >> vcss[i];
        }
        cout << 3 * nss << endl;
        for (int i = 1; i <= nss; i += 2)
        {
            cout << 1 << " " << i << " " << i+1<< endl;
            cout << 2 << " " << i << " " <<  i+1 << endl;
            cout << 1 << " " << i << " " <<  i+1<< endl;
            cout << 1 << " " << i << " " <<  i+1 << endl;
            cout << 2 << " " << i << " " <<  i+1 << endl;
            cout << 1 << " " << i << " " <<  i+1 << endl;
        }
    }
    return 0;
}

