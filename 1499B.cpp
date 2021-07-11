#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string str;
        cin>>str;
        int sz=str.size();
        int f=0;
        if(sz>3)
        {
            int i=0;
            while(i<sz-1)
            {
                if(str[i]=='1' && str[i+1]=='1') f=1;
                else if(f)
                {
                    if(str[i]=='0' && str[i+1]=='0')
                    {
                        cout<<"NO"<<endl;
                        break;
                    }
                }
                i++;
            }
            if(i==sz-1) cout<<"YES"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}
