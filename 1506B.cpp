#include <bits/stdc++.h>
using namespace std;
int LCS_Substr(string X, string Y, int m, int n)
{
    int LCS[m + 1][n + 1];
    int res= 0;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                LCS[i][j] = 0;

            else if (X[i - 1] == Y[j - 1])
            {
                LCS[i][j] = LCS[i - 1][j - 1] + 1;
                res = max(res, LCS[i][j]);
            }
            else
                LCS[i][j] = 0;
        }
    }
    return res;
}
int main()
{
    long tc;
    cin>>tc;
    while(tc--)
    {
        string X,Y;
        cin>>X;
        cin>>Y;
        int ans,lss;
        int m = X.length();
        int n = Y.length();
        lss=LCS_Substr(X, Y, m, n);
        ans=(m+n)-2*lss;
        cout<<ans<<"\n";
    }
    return 0;
}
