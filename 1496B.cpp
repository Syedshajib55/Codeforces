
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define mod 1000000007
#define FAST_IO ios_base::sync_with_stdio(),cout.tie(NULL),cin.tie(NULL);
#define pb push_back
#define ss second
#define ff first
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define f(i,a,b) for(int i=a;i<b;i++)
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
const int Nff = 1e5 + 5;
int main()
{

    int tff;
    cin >> tff;
    while (tff--)
    {
        int nff, kff;
        cin >> nff >> kff;
        ll aff[Nff];
        map<ll, int>mff;
        for (int i = 0; i < nff; i++)
        {
            cin >> aff[i];
            mff[aff[i]]++;
        }
        sort(aff, aff + nff);
        ll maxmff = aff[nff - 1];
        ll mexmff = 0;
        for (int i = 0; i <= nff; i++)
        {
            if (mff.find(i) != mff.end())
            {
                int jj=1;
                int gg=1;
            }
            else
            {
                mexmff = i;
                break;
            }
        }
        if(kff==0)
        {
            cout<<nff<<endl;
        }
        if (mexmff <= maxmff)
        {
            int gg1;
        }
        else
        {
            cout << nff+ kff << endl;
        }
        if ((mexmff + maxmff + 1) / 2 == mexmff)
        {
            int gg=1;
        }
        else
        {
            if (mff.find((mexmff + maxmff + 1) / 2) == mff.end())
            {
                cout << nff + 1 << endl;
            }
            else cout << nff << endl;
        }
    }
    return 0;
}
