#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y;
        cin>>x>>y;
        string str;
        cin>>str;
        int R=0,L=0,U=0,D=0;
        int f=1;

        for(int i=0;i<(int)str.length();i++)
        {
            if(str[i]=='R'){R++;}
            else if(str[i]=='L'){L++;}
            else if(str[i]=='U'){U++;}
            else if(str[i]=='D'){D++;}
        }
        if(x>=0)
        {
           if(R<x)f=0;
        }
        else
        {
            if(L < abs(x)) f=0;
        }
        if(y>=0)
        {
           if(U<y)f=0;
        }
        else
        {
             if(D< abs(y)) f=0;
        }
        if(!f)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
return 0;
}
