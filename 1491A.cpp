#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
    cin>>tc;
    while(tc--)
    {
        long long int n,u,v;
        cin>>n>>u>>v;
        long long int  vc[n+5];
        long long int mn=0X3f3f3f3f3f3f3f3f,mx=0;
        for(int i=0; i<n; i++)
        {
            cin>>vc[i];
            mn=min(mn,vc[i]);
            mx=max(mx,vc[i]);
        }
        long long cur=vc[0];
        bool flag=false;
        for(int i=1; i<n; i++)
        {
            if(abs(vc[i]-cur)>1)
            {
                flag=true;
                break;
            }
            else
            {
                cur=vc[i];
            }
        }
        if(!flag)
        {
            if(mx!=mn)cout<<min(u,v)<<endl;
            else  cout<<min(u+v,2*v)<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }

    return 0;
}

