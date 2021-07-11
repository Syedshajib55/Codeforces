#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string str;
    cin>>str;
    for(int j=0; j<3; j++)
    {
        int a = 0;
        bool no = 0;
        char c = 'A' + j;
        for(int i=0; str[i]; i++)
        {
            if(str[i] != c) a--;
            else a++;
            if(a < 0) no = 1;
        }
        if(!no and !a)
        {
            puts("YES");
            return;
        }
    }
    for(int j=0; j<3; j++)
    {
        int a = 0;
        bool no = 0;
        char c = 'A' + j;
        for(int i=0; str[i]; i++)
        {
            if(str[i] != c) a++;
            else a--;
            if(a < 0) no = 1;
        }
        if(!no and !a)
        {
            puts("YES");
            return;
        }
    }
    puts("NO");
}

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
        solve();
}

