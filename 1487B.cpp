#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, k;
        cin>>n>>k;
        if(n & 1)
         {
            if(k > n / 2)k += (k - n / 2 - 1) / (n / 2) + 1;
            cout<<k % n + ((k % n) == 0 ? n : 0)<<endl;
        }
        else cout<<k % n + ((k % n) == 0 ? n : 0)<<endl;

    }
}
