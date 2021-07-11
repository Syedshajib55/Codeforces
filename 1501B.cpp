#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        bool f=false;
        cin>>n;
        vector<int> vc(n);
        vector<int>res(n,0);
        for(int i=0; i<n; i++)
        {
            cin>>vc[i];
        }
        for(int i=0; i<n; i++)
        {
            if(vc[i]!=0)
            {
                res[i]+=-1;
                if(i-vc[i]>=0)res[i-vc[i]]+=1;
                else
                {
                    f=true;
                    res[0]+=1;
                }
            }
        }
        int tot = 0;
        for(int i=0; i<n; i++)
        {
           if((i!=0 || !f )&& tot<=0)
                cout<<"0 ";
           else cout<<"1 ";
           tot+=res[i];
        }
        cout<<endl;
    }
    return 0;
}
