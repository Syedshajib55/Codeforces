#include<bits/stdc++.h>
using namespace std;
int arr[10010];
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int res=0;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        for(int i=1; i<n; i++)
        {
            int k=arr[i];
            while(k*2<arr[i+1])
            {
                res++;
                k=k*2;
            }
        }
        for(int i=n; i>1; i--)
        {
            int k=arr[i];
            while(k*2<arr[i-1])
            {
                res++;
                k=k*2;
            }
        }
        cout<<res<<endl;
    }
}

