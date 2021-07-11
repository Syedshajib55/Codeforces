#include<bits/stdc++.h>
using namespace std;
int main()
{
   int tc;
   cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>arr(n*2,0);
        for(int i=0;i<2*n;i++)
            cin>>arr[i];
        int j=n;
        sort(arr.begin(),arr.end());

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
            cout<<arr[j]<<" ";
            j++;
        }
        cout<<endl;
    }
    return 0;
}
