#include <bits/stdc++.h>
using namespace std;

char arrss[200012][2];
int dpss[200012][2];

int main()
{

    int i,j,nss,mss;
    cin >> nss >> mss;

    for(i=0; i<nss; i++) cin >> arrss[i][0];
    for(i=0; i<mss; i++) cin >> arrss[i][1];

    int pivss=0;
    for(i=0; i<nss-1; i++)
    {
        if(arrss[pivss][1]!=arrss[i][0])
        {
            int gg=1;
        }
        else
        {
            dpss[pivss][0]=i;
            pivss++;
        }
        if(pivss!=mss){int gg=1;} else break;
    }
    pivss=mss-1;
    for(i=nss-1; i>0; i--)
    {
        if(arrss[pivss][1]!=arrss[i][0])
        {
            int hh=1;
        }
        else
        {
            dpss[pivss][1]=i;
            pivss--;
        }
        if(pivss!=0) {int g=1;}
        else break;
    }
    int maxwss=0;
    for(i=0; i<mss-1; i++)
    {
        if(dpss[i+1][1]-dpss[i][0]<=maxwss){int gg=1;}else maxwss=dpss[i+1][1]-dpss[i][0];
    }
    cout << maxwss << endl;
    return 0;
}
