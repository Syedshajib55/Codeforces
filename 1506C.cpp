#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define int long long int
#define double long double
#define ll  long long
#define pb push_back
#define mp make_pair
#define fe first
#define se second
#define nl "\n"
#define ub upper_bound
#define lb lower_bound
#define sz(x) (int)(x.size())
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define rko ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//----------------------------------------------------------------------------------------------------------------------------------------------------

const double pi = 3.14159265358979323;
int mod = 1000000000 + 9;
// // int mod = 998244353;
const double pii = acos(-1.0);
const int INF = 1e18;
const int inf = 1e9;

//----------------------------------------------------------------------------------------------------------------------------------------------------

ll power(ll x,ll y)
{
    ll res=1;
    x=x;
    while(y>0)
    {
        if(y&1)res=(res*x);
        y=y>>1;
        x=(x*x);
    }
    return res;
}
ll powe(ll x, ll y)
{
    x = x%mod, y=y%(mod-1);
    ll ans = 1;
    while(y>0)
    {
        if (y&1)
        {
            ans = (1ll * x * ans)%mod;
        }
        y>>=1;
        x = (1ll * x * x)%mod;
    }
    return ans;
}
ll gcd(ll a,ll b)
{
    if (a==0)return b;
    return gcd(b%a,a);
}
ll lcm(ll a,ll b)
{
    return (a/gcd(a,b)*b);
}
bool isPrime(int n)
{
    if(n<2) return false;
    for(int i=2; i*i<=n; i++)if(n%i==0) return false;
    return true;
}
ll ncr(ll n,ll r)
{
    ll res=1;
    if(r>n)return 0;
    if(r>n-r)r=n-r;
    for(ll i=0; i<r; i++)
    {
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
ll add(ll a, ll b)
{
    return((a % mod + b % mod) % mod);
}
ll sub(ll a, ll b)
{
    return((a % mod - b % mod + mod) % mod);
}
ll mul(ll a, ll b)
{
    return(((a % mod) * (b % mod)) % mod);
}
ll divi(ll a, ll b)
{
    return(mul(a, powe(b, mod - 2)) % mod);
}
ll rev(ll a)
{
    return powe(a, mod - 2);
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------

void fun()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //786
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------

const int N = 2e5 + 7;
std::vector<int> v[26];
int par[N];

signed main()
{
    rko;
    fun();
    // pre();
    int tests = 1;
    cin >> tests;
    for(int test = 1; test <= tests; test++)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        set<int> s, ss, firstOccur;
        int brr[n + 1], crr[n + 1];
        for(int i = 1; i <= n; i++) s.insert(i), ss.insert(i);
        for(int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if(s.find(arr[i]) != s.end())
            {
                firstOccur.insert(i);
                s.erase(s.find(arr[i]));
            }
            if(ss.find(arr[i]) != ss.end()) ss.erase(ss.find(arr[i]));
        }
        for(int i = 1; i <= n; i++)
        {
            if(firstOccur.find(i) != firstOccur.end())
            {
                brr[i] = arr[i];
                continue;
            }
            if(s.find(arr[i]) == s.end())
            {
                brr[i] = *s.begin();
                s.erase(s.begin());
            }
        }
        for(int i = 1; i <= n; i++)
        {
            if(firstOccur.find(i) != firstOccur.end())
            {
                crr[i] = arr[i];
                continue;
            }
            auto it = lower_bound(ss.begin(), ss.end(), arr[i]);
            if(it == ss.end()) --it;
            if(*it > arr[i]) --it;
            crr[i] = *it;
            ss.erase(ss.find(crr[i]));
        }
        for(int i = 1; i <= n; i++) cout << brr[i] << ' ';
        cout << '\n';
        for(int i = 1; i <= n; i++) cout << crr[i] << ' ';
        cout << '\n';

    }
    cerr << "time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " sec \n";
    return 0;
}
