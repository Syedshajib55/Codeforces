#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 2e5 + 10;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<ll> v,vc;
        n*=2;
        for(int i = 1; i <= n; i++)
        {
            int x,y;
            cin >> x >> y;
            if(x != 0)
            {
                v.push_back(x* 1ll * x);
            }
            else
            {
                vc.push_back(y* 1ll * y);
            }
        }
        sort(v.begin(), v.end());
        sort(vc.begin(), vc.end());
        long double ans = 0;
        n /= 2;
        for(int i = 0; i < n; i++)
        {
            ans += sqrt((long double)v[i] + (long double)vc[i]);
        }
        printf("%.10lf\n",ans);
    }
    return 0;
}
