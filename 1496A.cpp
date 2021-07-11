#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll td;
ll kd,nd;
string sd;

int main()
{
    cin>>td;
    while(td--)
    {
        cin>>nd>>kd;
        cin>>sd;
        if(kd!=0)
        {
            int hh=1;
        }
        else
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(nd<(2*kd+1))
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll minnd = 0;
        ll maxxd = nd-1;
        bool flagd = true;
        while(minnd<=kd-1)
        {
            if(sd[minnd]==sd[maxxd])
            {
                minnd++;
                maxxd--;
            }
            else
            {
                cout<<"NO"<<endl;
                flagd = false;
                break;
            }
        }
        if(!flagd)
        {
            int gg=1;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
