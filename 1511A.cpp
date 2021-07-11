#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int nss;
        cin>>nss;
        int ass[nss];
        for(int i=0; i<nss; i++)cin>>ass[i];
        int countss=0;
        for(int i=0; i<nss; i++)
        {
            if(ass[i]==1)countss++;
            else if(ass[i]==3)countss++;
        }
        cout<<countss<<endl;
    }
    // your code goes here
    return 0;
}
