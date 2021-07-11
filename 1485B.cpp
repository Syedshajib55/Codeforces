#include <bits/stdc++.h>
using namespace std;
#define  ll long long int
const ll INF = 1e9 + 7;
const int N = 2e5 + 10;
int a[N];
int main()
{

    int n, q, k;
    cin>>n>>q>>k;
    for (int i = 1; i <= n; i++)
        cin>>a[i];
    while (q--)
    {
        int l, r;
        cin>>l>>r;
        if (l != r)
        {
            printf("%d\n", (k - (r - l + 1)) * 2 - (a[l] - 1) - (k - a[r]));
        }
        else
        {
            printf("%d\n", k - 1);
        }
    }
    return 0;
}
