#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        if(k>(n-1)/2)
        {
            cout<<-1<<endl;
            continue;
        }
      vector<int>vc(n);
      int sm=1, b=n;
        for(int i=0; i<n; i++)
        {
            if(i%2!=1 || !k)
            {
               vc[i]=sm++;
            }
            else
            {
              k--;
                vc[i]=b--;
            }
        }
        for(int i : vc)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
