#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll p=1e9+7;
ll ans;
int tc,n,k;
int main()
{
    cin>>tc;
    while(tc--)
    {
        ans=1;
        cin>>n>>k;
        while(k--)
            ans=ans*n%p;
        cout<<ans<<endl;
    }
    return 0;
}
