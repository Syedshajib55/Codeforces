#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        if(n % 2 != 1)
        {
            if((n - 2) % 4 != 0)
            {
                cout<<n / 2<<' '<<n / 4 << ' '<<n / 4<<endl;
            }
            else
                cout<<2<<' '<<n / 2 - 1 << ' ' << n / 2 - 1 <<endl;
        }
        else
        {
          cout<<1 << ' ' << n / 2 << ' ' << n / 2 << endl;
        }
    }

}
