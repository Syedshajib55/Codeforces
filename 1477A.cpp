#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    // your code goes here
    ll tss;
    cin>>tss;
    while(tss--)
    {
        ll ns;
        cin>>ns;
        unordered_map<ll, ll> mpss;
        ll tmpss;
        ll ansss= 0;

        for(int i=0; i<ns; i++)
        {
            cin>>tmpss;
            mpss[tmpss]++;
            ansss = max(ansss, mpss[tmpss]);
        }
        cout<<ansss<<endl;
    }
    return 0;
}
