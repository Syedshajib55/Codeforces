#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool ans=true;
        string x;
        int n=x.size(),a,b;
        cin>>a>>b>>x;
        n=x.size();
        n--;
        for( int i=0; i<=n; i++,n--)
        {
            if(n!=i)
            {
                if(x[i]!=x[n])
                {
                    if(x[i]=='?')
                    {
                        if(x[n]=='?')
                        {
                        }
                        else
                        {
                            x[i]=x[n];
                            if(x[n]=='1')b-=2;
                            else a-=2;
                        }
                    }
                    else
                    {
                        if(x[n]=='?')
                        {
                            x[n]=x[i];
                            if(x[n]=='1')b-=2;
                            else a-=2;
                        }
                        else
                        {
                            ans=false;
                        }
                    }
                }
                else
                {
                    if(x[i]!='?')
                    {
                        if(x[n]=='1')b-=2;
                        else a-=2;
                    }
                }
            }
            else
            {
                if(x[i]!='?')
                {
                    if(x[n]=='1')b--;
                    else a--;
                }
            }
        }
        n=x.size();
        n--;
        for( int i=0; i<=n; i++,n--)
        {
            if(x[i]=='?'&&i!=n)
            {
                if(a>b)
                {
                    x[i]='0';
                    x[n]=x[i];
                    a-=2;
                }
                else
                {
                    x[i]='1';
                    x[n]=x[i];
                    b-=2;
                }
            }
            else
            {
                if(i==n&&x[i]=='?')
                {
                    if(a>b)
                    {
                        x[i]='0';
                        a--;
                    }
                    else
                    {
                        x[i]='1';
                        b--;
                    }
                }
            }
        }
        if(a!=0||b!=0)ans=false;
        if(ans==false)cout<<"-1"<<endl;
        else cout<<x<<endl;
    }
}
