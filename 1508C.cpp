#include<bits/stdc++.h>
using namespace std;
#define el cout<<"\n"
#define	f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define maxn 2003
#define fi first
#define se second
int n, a[maxn], m, b[maxn], c[maxn];
long long f[maxn][maxn];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    f1 (i, n) cin >> a[i];
    sort (a+1, a+n+1);
    int cnt=0;
    f1 (i, n)
    {
        if (a[i]!=a[i-1] && i>1)
        {
            b[++m]=a[i-1];
            c[m]=cnt;
            cnt=1;
        }
        else cnt++;
    }
    b[++m]=a[n];
    c[m]=cnt;
    f1(i, m) f[i][i]=0;
    for (int i=m; i; i--)
        for (int j=i+1; j<=m; j++)
        {
            f[i][j]=min(f[i][j-1]+1ll*(b[j]-b[i])*c[j],
                        f[i+1][j]+1ll*(b[j]-b[i])*c[i]);
        }
    cout << f[1][m];
    return 0;
}
