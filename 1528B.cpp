#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long> arr(n);
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int ans =0;
        long mx = 0;
        int rep=0;
        bool b =false;
        map<int,int> m;
        //all negative numbers + postive number
        for(int i=0; i<n; i++)
        {
            if(arr[i] <= 0 && !b)
            {
                mx = arr[i];
                ans =1;
                m[arr[i]] = 1;
                b = true;
            }
            else if(arr[i] <= 0)
            {
                ans++;
                if(m.find(arr[i]) != m.end()) rep++;
                m[arr[i]] = 1;
                mx = max(mx,arr[i]);
            }
            else
            {
                if(abs(arr[i]-mx) >= max(mx,arr[i]) )
                {
                    if(m.find(arr[i]) != m.end()) rep++;
                    ans++;
                    m[arr[i]] = 1;
                    mx = max(arr[i],mx);
                }
            }
        }
        if(mx > 0) ans-=rep;
        cout<<ans<<"\n";
    }
    return 0;
}
