#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string str;
        cin >> str;
        for(int i=0; i<str.length(); i+=2) //for Alice
        {
            if(str[i]>=98 && str[i]<=122)
            {
                str[i] = 'a';
            }
            else if(str[i]==97)
            {
                str[i] += 1;
            }
        }
        for(int i=1; i<str.length(); i+=2) //for Bob
        {
            if(str[i]==122)  // s[i]==z
            {
                str[i] -= 1;
            }
            else if(str[i]>=97 && str[i]<=121)
            {
                str[i] = 'z';
            }
        }
        cout << str<<endl;
    }

    return 0;
}
