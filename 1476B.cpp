#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 105;
ll n, K, p[N];
bool inline chk(ll x)
{
    x += p[0];
    for (int i = 1; i < n; i++)
    {
        if (100ll * p[i] > x * K) return false;
        x += p[i];
    }
    return true;
}

int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        cin>>n>>K;
        for (int i = 0; i < n; i++)
            scanf("%d", p + i);
        ll l = 0, r = 1e16;
        while (l < r)
        {
            ll mid = (l + r) >> 1;
            if (!(chk(mid))) l = mid + 1;
            else r = mid;
        }
        cout<<r<<endl;
    }
    return 0;
}
