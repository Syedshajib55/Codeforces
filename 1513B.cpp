#include <bits/stdc++.h>
using namespace std;
long long mod=1000000007;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int ans;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i==0)
                ans=a[i];
            else
                ans=(ans&a[i]);
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]==ans)
                cnt++;
        }
        if(cnt<2)
            cout<<0<<endl;
        else
        {
            long long t=cnt;
            if(cnt>2)
                t+=cnt;
            for(long long i=n-2; i>=1; i--)
            {
                t=(t%mod*i%mod)%mod;
            }
            cout<<t<<endl;
        }
    }
    return 0;
}
