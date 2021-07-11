#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        int aa=a;
        int tmp =0;
        int res = 1e9;
        for(int add=0; (add+b)<=40000; add++)
        {
            tmp=add;
            a=aa;
            if(add+b<=1) continue;
            int d=add+b;
            while(a>d)a/=d,tmp++;
            if(a==d)tmp+=2;
            else if(d) tmp++;
            res=min(res,tmp);
        }

        cout<<res<<endl;
    }
    return 0;
}
