#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>vc;
        int frq[m]= {0};
        for(int i=0; i<n; i++)
        {
            int y;
            cin>>y;
            vc.push_back(y);
            frq[y%m]++;
        }
        int res=0;
        if(frq[0]>0) res++;
        for(int i=1; i<=m/2; i++)
        {
            if(frq[i]>0||frq[m-i]>0)  res++;
            if(frq[i]==frq[m-i])
            {
                frq[i]=0;
                frq[m-i]=0;
            }
            else if(frq[i]>frq[m-i])
            {
                frq[i]-=(frq[m-i]+1);
                frq[m-i]=0;

            }
            else
            {
                frq[m-i]-=(frq[i]+1);
                frq[i]=0;
            }
        }

        for(int i=1; i<m; i++)
        {
            res+=frq[i];
        }

        cout<<res<<endl;
    }
}
