#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int b[n+2], i, j, sum = 0;
        for(i=0; i<n+2; i++)
            cin>>b[i];

        sort(b, b+n+2);

        for(i=0; i<n; i++)
            sum += b[i];
        if(sum == b[n])
            for(i=0; i<n; i++)
                cout<<b[i]<<" ";
        else
        {
            sum += b[n];
            for(i=0; i<n+1; i++)
                if(sum-b[i] == b[n+1])
                    break;
            if(i < n+1)
            {
                for(j=0; j<n+1; j++)
                    if(j != i)
                        cout<<b[j]<<" ";
            }
            else cout<<"-1";
        }
        cout<<endl;
    }
    return 0;
}
