#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main()
{

    fast
    int tc;
    cin>>tc;
    while(tc--)
    {

        ll n, m, k;
        cin>>n>>m>>k;
        vector<ll>v1(n+1);
        ll sum = 1;
        for(ll i=2; i<=k; i++)
        {
            sum *= 10;
        }
        ll c = 1;
        while(1)
        {
            ll ok = 1;
            for(ll i=2; i*i<=sum; i++)
            {
                if(sum%i == 0)
                {
                    ok = 0;
                }
                else c++;
            }
            if(ok) break;
            sum++, c--;
        }
        c = 2;
        if(k == 1) sum = 2;
        else if(sum == 2) c++;

        ll res1 = sum;
        ll res2 = sum;
        for(ll i=k+1; i<=n; i++)
        {
            res1 *= 10;
        }
        for(ll i=k+1; i<=m; i++)
        {
            res2 *= 10;
        }
        c = sum;
        res2 += sum;

        cout<<res1<<' '<<res2<<endl;

    }
}
