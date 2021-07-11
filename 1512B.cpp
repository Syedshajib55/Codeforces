#include<bits/stdc++.h>
using namespace std;
char tb[410][410];
int main()
{
    int t,n,a,b,x,y,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=-1;
        for( int i=0; i<n; i++)
        {
            for( int j=0; j<n; j++)
            {
                cin>>tb[i][j];
                if(tb[i][j]=='*')
                {
                    if(a==-1)
                    {
                        a=i;
                        b=j;
                    }
                    else
                    {
                        x=i;
                        y=j;
                    }
                }
            }
        }
        if(b==y)
        {
            if(b+1<n)
            {
                b++;
                y++;
            }
            else
            {
                b--;
                y--;
            }
        }
        if(a==x)
        {
            if(a+1<n)
            {
                a++;
                x++;
            }
            else
            {
                a--;
                x--;
            }
        }
        tb[a][y]='*';
        tb[x][b]='*';

        for( int i=0; i<n; i++)
        {
            for( int j=0; j<n; j++)
            {
                cout<<tb[i][j];
            }
            cout<<endl;
        }
    }
}
