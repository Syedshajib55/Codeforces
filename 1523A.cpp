#include <bits/stdc++.h>
#define ll int long long
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll m,n;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<int>v;
        while(m--)
        {
            if(s[0]=='0' && s[1]=='1')
            {
                v.push_back(0);
            }
            for(int i=1; i<n; i++)
            {
                if(s[i]=='0' && s[i-1]=='1' && s[i+1]!='1' || s[i]=='0' && s[i+1]=='1' && s[i-1]!='1')
                {
                    v.push_back(i);
                }
            }
            for(int j=0; j<v.size(); j++)
            {
                s[v[j]]='1';
            }
        }
        cout<<s<<endl;
    }
}
