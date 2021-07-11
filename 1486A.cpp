#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        long long h[101];
        cin>>n;
        h[0]=-1;
        for(int i=1; i<=n; i++)
            cin>>h[i];
        int res=1;
        for(int i=1; i<=n; i++)
        {
            if(h[i]>h[i-1])
            {
                 long long tmp=h[i]-h[i-1]-1;
                h[i]=h[i-1]+1;
                if(i<n)h[i+1]+=tmp;
            }
            else
            {
               res=0;
                break;
            }
        }
        if(!res)cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
