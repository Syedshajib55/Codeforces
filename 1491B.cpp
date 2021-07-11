
#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define mii map<int,int>
#define mll map<long long int,long long int>
#define rep(it,m) for(auto it=m.begin();it!=m.end();it++)
#define pb push_back
#define fr first
#define sc second
#define mod 1000000007
#define setbiti(x) __builtin_popcount(x)
#define setbitll(x) __builtin_popcountll(x)
#define vi vector<int>
#define vll vector<long long int>
#define f(i,x,n) for(int i=x;i<n;i++)
#define l(i,a,b) for(int i=a;i>b;i--)
#define all(x) x.begin(),x.end()
#define fill(a,x)  memset(a,x,sizeof(a))
#define pie 3.14159265
using namespace std;


int abs(int xss,int yss)
{
    if(xss-yss<=0)
        return yss-xss;
    else
        return xss-yss;
}

int main()
{
     int x; cin>>x; while(x--)
    {
        ll nss,uss,vss;
        cin>>nss>>uss>>vss;
        vi vecss(nss);
        f(i,0,nss)
        {
            cin>>vecss[i];
        }
        bool flagss=false,fss=true;
        f(i,1,nss)
        {
            if(vecss[i]==vecss[i-1])
            {
                int gg=1;
            }
            else
            {
                fss=false;
            }
            if(abs(vecss[i],vecss[i-1])<2)
            {
                int jj=1;
            }
            else
            {
                flagss=true;
                break;
            }
        }
        if(!fss)
        {
            int ff=1;
        }
        else
        {
            cout<<min(vss+uss,2*vss)<<endl;
            continue;
        }
        if(!flagss)
        {
            int gg=1;
        }
        else
        {
            cout<<"0"<<endl;
            continue;
        }
        cout<<min(vss,uss)<<endl;
    }






    return 0;
}
