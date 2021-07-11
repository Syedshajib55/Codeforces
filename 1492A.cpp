#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int a,b,c,n,m;
        cin>>n>>a>>b>>c;
        long long tot=0X3f3f3f3f3f3f3f3f;
        m=n; m=m%a;
        if(m!=0)tot=min(tot,a-m);
        else tot=0;
        m=n; m=m%b;
        if(m!=0)tot=min(tot,b-m);
        else tot=0;
        m=n; m=m%c;
        if(m!=0)tot=min(tot,c-m);
        else tot=0;

        cout<<tot<<endl;
    }
    return 0;
}
