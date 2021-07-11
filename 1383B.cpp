#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,tc,i;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int arr[n],flag=0,diff,m;

        for(i=0; i<n; i++)
            cin>>arr[i];

        diff=arr[1]-arr[0];

        for(i=2; i<n; i++)
        {
            if(arr[i]-arr[i-1]==diff)
            {
                flag=1;
                break;
            }
        }

        if(count(arr,arr+n,arr[0])==n)
            cout<<0<<endl;
        else if(flag==1)
        {
            for(i=1; i<n; i++)
            {
                if(arr[i]-arr[i-1]!=diff)
                    m=diff-arr[i]+arr[i-1];
            }

            cout<<m<<" "<<diff<<endl;
        }
        else
            cout<<-1<<endl;

    }
    return 0;
}
