#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<pair<long long,long long> > v;
        for(int i=0;i<n;i++)
        {
            ll x,y;
            cin>>x>>y;
            v.pb({x,y});
        }
        map<long long, long long> mp;
        ll ans=0;
        for(int i=0;i<n-1;i++)
        {
            ll x,y;
            cin>>x>>y;

            if(mp.find(x) != mp.end() && mp.find(y) != mp.end())
                ans += abs(mp[x] - mp[y]);
            else if(mp.find(x) != mp.end())
            {
                if(abs(mp[x]-v[y-1].first) < abs(mp[x]-v[y-1].second))
                {
                    ans += abs(mp[x] - v[y-1].second);
                    mp[y] = v[y-1].second;
                }
                else
                {
                    ans += abs(mp[x] - v[y-1].first);
                    mp[y] = v[y-1].first;
                }
            }

            else if(mp.find(y) != mp.end())
            {
                if(abs(mp[y]-v[x-1].first) < abs(mp[y]-v[x-1].second))
                {
                    ans += abs(mp[y] - v[x-1].second);
                    mp[x] = v[x-1].second;
                }
                else
                {
                    ans += abs(mp[y] - v[x-1].first);
                    mp[x] = v[x-1].first;
                }
            }
            else if(abs(v[x-1].first-v[y-1].second)  < abs(v[x-1].second-v[y-1].first))
            {
                ans += abs(v[x-1].second-v[y-1].first);
                mp[x] = v[x-1].second;
                mp[y] = v[y-1].first;
            }
            else
            {
                ans += abs(v[x-1].first-v[y-1].second);
                mp[x] = v[x-1].first;
                mp[y] = v[y-1].second;
            }
        }
        cout<<ans<<"\n";
    }
}


