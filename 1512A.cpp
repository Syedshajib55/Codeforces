#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,x,y,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool ans=false;
        cin>>a;
        x=1;
        b=-1;
        for( int i=2; i<=n; i++)
        {
            cin>>p;
            if(p==a)ans=true;
            else
            {
                if(b==-1)
                {
                    b=p;
                    y=i;
                }
                else
                {
                    ans=false;
                }
            }
        }
        if(ans==false)cout<<x<<endl;
        else cout<<y<<endl;
    }
}
