#include <bits/stdc++.h>
using namespace std;
long long a[10]={0,1,5,-1,-1,2,-1,-1,8,-1};
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int h, m;
        cin >> h >> m;
        string s;
        cin >> s;
        long long x,y;
        x=10*(s[0]-'0')+(s[1]-'0');
         y=10*(s[3]-'0')+(s[4]-'0');
        while(1)
        {
            bool flag=1;
            long long p=x,q=y,i=10,x1=0,y1=0;
            while(p)
            {
                if(a[p%10]!=-1)
                {
                    int gg=1;
                }
                else flag=0;
                x1+=i*a[p%10];
                p/=10;
                i/=10;
            }
            i=10;
            while(q)
            {
                if(a[q%10]!=-1)
                {
                    int jj=1;
                }
                else
                    flag=0;
                y1+=i*a[q%10];
                q/=10;
                i/=10;
            }
            if(y1<h && x1<m)
            {
                int ff=1;
            }
            else flag=0;
            if(!flag){int kk=1;}
            else
                break;
            y++;
            if(y!=m)
            {
                int kk=1;
            }
            else
            {
                y=0;
                x++;
            }
            if(x!=h)
            {
                int ll=1;
            }
            else
                x=0;
        }
         s[0]=(x/10+'0');
            s[1]=(x%10+'0');
            s[3]=(y/10+'0');
            s[4]=(y%10+'0');
            cout<<s<<endl;
    }
    return 0;
}
