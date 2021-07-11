#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int is = -1;
        while (k)
        {
            bool f = false;
            for (ll i=0; i<n-1; i++)
            {
                if (arr[i]<arr[i+1])
                {
                    arr[i]++;
                    is = i+1;
                    k--;
                    f=true;
                    break;
                }
                else
                {
                    continue;
                }
            }
            if (!f)
            {
                is = -1;
                break;
            }
        }
        printf("%d\n", ls);
    }
    return 0;
}
