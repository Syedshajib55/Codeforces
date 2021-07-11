#include<bits/stdc++.h>
using namespace std;

#define BOOST ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define ll long long
#define test int t ; cin>>t; while(t--)

void solvess()
{
    ll flagss,nss,i,xss,yss;
    cin>>nss;
    flagss = 0;
    for(i=0; i<nss; i++)
    {
        cin>>xss;
        yss = sqrt(xss);
        if(yss*yss != xss)
            flagss = 1;
    }
    if(flagss == 1)
        cout<<"YES"<<'\n';
    else
        cout<<"NO"<<'\n';
}
int main()
{
    BOOST
    test
    solvess();
}
