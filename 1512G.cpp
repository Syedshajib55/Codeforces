#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 10000001
ll arr[N];
ll res[N];

void SOD()
{
    ll MX=sqrt(N);
    for(int i=1; i<=MX; i++)
    {
        for(int j=i*i; j<N; j+=i)
        {
            if(j!=i*i) arr[j]+=i+j/i;
            else arr[j]+=i;
        }
    }
    for(int i=1; i<N; i++)
    {
        if(arr[i]<N+1)
        {
            if(!res[arr[i]])
                res[arr[i]]= i;
        }
    }
}
int main()
{
    SOD();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(!res[n]) cout<<-1<<endl;
        else cout<<res[n]<<endl;
    }
}

