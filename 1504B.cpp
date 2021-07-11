#include <bits/stdc++.h>
using namespace std;
void solve()
{
        int n;
        cin>>n;
        string st,str;
        cin>>st;
        cin>>str;
        int flip=0;
        vector<bool>val(n,false);
        long long cnt=0;
        for(int i=0; i<n; i++)
        {
            if(st[i]!='0')
                cnt--;
            else cnt++;
            if(cnt==0)val[i]=true;
        }
        for(int i=n-1; i>=0; i--)
        {
            if(flip)
            {
                if(st[i]==str[i])
                {
                    if(!val[i])
                    {
                        cout<<"NO"<<endl;
                        return;
                    }
                    else
                        flip=0;
                }
            }
            else
            {
               if(st[i]!=str[i])
                {
                    if(!val[i])
                    {
                        cout<<"NO"<<endl;
                        return;
                    }
                    else
                        flip=1;
                }
            }
        }
        cout<<"YES"<<endl;
}
int main()
{
    int tc;
    cin>>tc;
    string s1,s2;
    while(tc--)
    {
        solve();
    }
    return 0;
}
