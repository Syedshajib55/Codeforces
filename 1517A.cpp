#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long t,n,i,m,k=0,x=10,j;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n%2050==0)
        {
            m=n/2050;
            x=10;
            k=0;
            while(m>0)
            {
                k=k+m%10;
                m=m/10;
            }
            cout << k << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}
