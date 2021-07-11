#include<bits/stdc++.h>
using namespace std;
int T,n;
char s[100005];
int main()
{
    ios::sync_with_stdio(false);
    int i,cntM,cntT;
    cin>>T;
    while(T--)
    {
        cntM=cntT=0;
        cin>>n>>s+1;
        for(i=1; i<=n; i++)
            if(s[i]!='M') ++cntT;
            else
            {
                ++cntM;
                if(cntM>cntT)
                    break;
            }

        if(cntT!=cntM*2||i<=n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cntM=cntT=0;
        for(i=n; i; i--)
            if(s[i]!='M') ++cntT;
            else
                {
                ++cntM;
                if(cntM>cntT)
                    break;
            }

        if(i)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
    return 0;
}
