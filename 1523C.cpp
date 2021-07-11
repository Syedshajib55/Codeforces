#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long

signed main()
{

    int Tss;
    cin>>Tss;
    while(Tss--)
    {
        int n;
        cin>>n;
        vector<int>vss(n),res;
        for(int i=0; i<n; i++)
        {
            cin>>vss[i];
            if(!res.empty() && vss[i]!=1)
             {
                while(!res.empty() && res.back()+1 != vss[i]) res.pop_back();
                if(res.empty())
                {
                    int ress=1;
                }
                else res.pop_back();
                res.pb(vss[i]);
            }
            else
            res.pb(1);
            for(int j=0; j<res.size(); j++)
            {
                if(j!=res.size()-1)cout<<res[j]<<'.';
                else cout<<res[j]<<endl;
            }
        }


    }
}
