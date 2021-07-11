#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n,m,x,ro;
        cin>>n>>m>>x;
        ll quot = x%n;
        if(quot!=0)
            ro = quot;
        else
            ro = n;
        ll colum = x/n;
        if(quot!=0)
            colum++;
        cout<<((ro - 1)*m)+colum<<endl;

    }
    return 0;
}
