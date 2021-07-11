#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        bool check = true, sz = s.size();
        for(auto &i : s)
        {
            if(i!='a')
            {
                check=false;
                break;
            }
        }
        if(!check)
        {
            cout<<"YES"<<endl;
            string str1=s+'a';
            string str2=str1;
            reverse(str2.begin(),str2.end());
            if(str1!=str2)cout<<s+'a'<<endl;
            else cout<<'a'+s<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
