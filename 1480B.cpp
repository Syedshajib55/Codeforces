#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll a,b,n,sum=0,l=0;
        cin>>a>>b>>n;
        ll arr[n+1],brr[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum=max(sum,arr[i]);
        }
        for(int i=0; i<n; i++)
        {
            cin>>brr[i];
            if(brr[i]%a!=0) l+=arr[i];
            l+=(brr[i]/a)*arr[i];
        }
        if(b<=l-sum) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
