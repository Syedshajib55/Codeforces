#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll tc,n,k;
int main()
{
	cin>>tc;
	while(tc--)
	{
		cin>>n>>k;
		vector<ll>ar(n+5);
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		ll j=n-1;
		for(int i=0;i<n-1;i++)
		{
			ll x=ar[i];
			if(k<=x)
			{
				ar[i]-=k;
				ar[j]+=k;
				break;
			}
			else
			{
				k-=x;
				ar[i]=0;
				ar[j]+=x;
			}
		}
		for(int i=0;i<n;i++)
            cout<<ar[i]<<' ';
        cout<<endl;
	}

	return 0;
}
