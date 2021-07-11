#include<bits/stdc++.h>
using namespace std;
string f(string a, string b)
{
    int j=0,k=0,t=a.size();
    string r;
    while(j<t&k<t)
    {
        if(a[j]==b[k])
        {
            r+=a[j];
            j++;
            k++;
        }
        else
        {
            r+=a[j];
            r+=b[k];
            j++;
            if(b[k]==a[j])j++;
            k++;
        }
    }
    while(j<t)
    {
        r+=a[j];
        j++;
    }
    while(k<t)
    {
        r+=b[k];
        k++;
    }
    return r;
}
int main()
{
    int t,n;
    cin>>t;
    string a,b,c,ans;
    while(t--)
    {
        cin>>n;
        cin>>a>>b>>c;
        ans=min(f(a,b),f(b,a));
        if(ans.size()<=3*n)
        {
            cout<<ans<<endl;
        }
        else
        {
            ans=min(f(a,c),f(c,a));
            if(ans.size()<=3*n)
            {
                cout<<ans<<endl;
            }
            else
            {
                ans=min(f(b,c),f(c,b));
                cout<<ans<<endl;
            }
        }
    }
}
