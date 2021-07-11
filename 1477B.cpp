#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll, ll> PP;
#define rep(i, n) for (ll i = 0; i < ll(n); i++)
#define rrep(i, n) for (ll i = n - 1; i > -1; i--)
#define all(v) v.begin(), v.end()
#define pb push_back
#define fi first
#define se second
template <class X>
void print(X x)
{
    cout << x << endl;
}
void print(vl x)
{
    for (ll i : x)
    {
        cout << i << " ";
    }
    cout << endl;
}
const ll INF = (1LL << 61) - 1;
const ll MOD = 1000000007 /*998244353*/;
const ll MAX_N = 500010;
ll a, b, c, d,nss,ansss, e, f, h, x, y, z, p, q, n, t, r, k, w, l, ans, i, j, u, v, m;
ll codeforces = 1;
string S, T;
vector<vl> g(MAX_N);
ll Ass[500010], Bss[500010];

void solvess()
{
    cin >> nss;
    rep(i, nss* 2)
    {
        cin >> Ass[i];
    }
    sort(Ass, Ass + nss * 2);
    reverse(Ass, Ass + nss * 2);
    ansss = 1;
    Ass[nss * 2] = INF;
    rep(i, nss)
    {
        if (Ass[i * 2] != Ass[i * 2 + 1])
            ansss = 0;
        if (Ass[i * 2 + 1] == Ass[i * 2 + 2])
            ansss = 0;
    }
    if (!ansss)
    {
        print("NO");
        return;
    }
    a = 0;
    rep(i, nss)
    {
        if ((Ass[i * 2] - a * 2) % (nss * 2 - i * 2) != 0)
        {
            //cout<<i<<"fsdaaf";
            print("NO");
            return;
        }
        k = (Ass[i * 2] - a * 2) / (nss * 2 - i * 2);
        if (k > 0)
        {
        int hh=1;
        }
        else
        {
            //cout<<i<<" "<<k;
            print("NO");
            return;
        }
        a += k;
    }
    print("YES");
}
int main()
{
    int tc;cin>>tc;
    while (tc--)
    {
        solvess();
    }
}
