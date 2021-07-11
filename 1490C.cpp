#include<bits/stdc++.h>
using namespace std;
int arr[30010];
unordered_set<long long>St;
int main()
{
    int tc;
    cin>>tc;
    for(long long a=1; a*a*a<=1000000000000; a++)
    St.insert(a*a*a);
    while(tc--)
    {
        long long x,a,B,b;
        cin>>x;
        bool flag=false;
        for(a=1; a*a*a<x; a++)
        {
            B=x-a*a*a;

            if(St.find(B)!=St.end())
            {
                flag=true;
                break;
            }
        }
        if(!flag)
            printf("NO\n");
        else
            printf("YES\n");
    }
}
