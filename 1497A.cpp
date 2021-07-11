#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int> vc(101,0);
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            if(vc[a]!=0)v.push_back(a);
            else  vc[a]++;
        }
        for(int i=0; i<101; i++)
        {
            if(vc[i]>0)
                cout<<i<<' ';
        }
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<' ';
        }
        cout<<endl;

    }
    return 0;
}
