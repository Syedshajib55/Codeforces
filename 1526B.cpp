#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin>> tc;
    while(tc--)
    {
        int n;
        cin>>n;
        bool flag=true;
        int multip=n/11;
        int baki=n%11;
        if(multip/10<baki)
        {
            flag=true;
        }
        else
        {
            flag=false;
        }
        if(!flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
