#include<bits/stdc++.h>
using namespace std;
#define ll long long
int pref[100015];
void soln()
{
	int n,qr;
	cin>>n>>qr;
	string str;
	cin>>str;

	for(int i=1; i<=n; i++)
    {
		pref[i] = pref[i - 1] + str[i-1] - 97 + 1;
	}
	for(int i=0; i<qr; i++)
    {
		int L, R;
		cin>>L >> R;
		cout<<pref[R] - pref[L-1]<<"\n";
	}
}
int main()
{
    ll tc=1;
    while(tc--)
    {
        soln();
    }
}
