#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int tc;
    cin >>tc;
    while(tc--)
    {
        int n,k,x;
        vector<int>vc;
        cin >>n>>k;
        for(int i=n; i>k; i--)
        {
            vc.push_back(i);
        }
        int gg=k/2;
        if(k%2!=0){int gtg=1;}
        else gg--;

        for(int i=k-1; i>gg; i--)
        {
                vc.push_back(i);
        }
        cout<<vc.size()<<endl;
        for(int i=0; i<vc.size(); i++)
            cout<<vc[i]<<" ";
        cout<<endl;
    }
    return 0;
}
