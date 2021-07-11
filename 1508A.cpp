#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-- )
    {
        int nss ;
        cin>>nss ;
        vector<int>voss;
        vector<int>vess;
        int xss;
        for(int i=0 ; i<nss ; i++ )
        {
            cin>>xss;
            if(!(xss%2))vess.push_back(xss);
            else voss.push_back(xss);
        }
        for(int i=0 ; i<vess.size(); i++ )cout<<vess[i]<<" ";
        for(int i=0 ; i<voss.size(); i++ )cout<<voss[i]<<" ";
        cout<<endl;
    }

    return 0;
}
