#include<bits/stdc++.h>
using namespace std;
int tc,n,a[2005],s[2005];
int main()
{
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            s[i]=s[i-1]^a[i];
        }
        for(int i=1; i<n; i++)
            if(s[i]==(s[n]^s[i]))
            {
                cout<<"YES"<<endl;
                goto label;
            }
        for(int i=1; i<n; i++)
            for(int j=i+1; j<n; j++)
                if(s[i]==(s[j]^s[i])&&s[i]==(s[n]^s[j]))
                {
                    cout<<"YES"<<endl;
                    goto label;
                }
        cout<<"NO"<<endl;
label:
        ;
    }
    return 0;
}
