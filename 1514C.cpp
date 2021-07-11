#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll p;
int n,ans;
int main()
{
    ll p=1,res=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(__gcd(i,n)==1)
        {
            p*=i;
            p%=n;
            res++;
        }
    }
    if(p!=1)cout<<res-1<<endl;
    else
    {
        p=0;
        cout<<res<<endl;
    }
    for(int i=1; i<=n; i++)
    {
        if(i!=p)
        {
            if(__gcd(i,n)==1)
                cout<<i<<' ';
        }
    }
    return 0;
}
