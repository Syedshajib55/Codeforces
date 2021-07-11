#include<bits/stdc++.h>
#define int long long int
using namespace std ;
bool chk(vector<int> &vcc)
{
    if(vcc[0] == vcc[1] && vcc[1] == vcc[2])
    {
        return false ;
    }
    return true;
}
signed main()
{

    int tc;
    cin >> tc ;
    while(tc--)
    {
        int n ;
        cin >> n ;
        vector<int> vc(n) ;
        for(int i = 0; i < n ; ++i)
        {
            cin >> vc[i] ;
        }
        vector<int> vcc(3) ;
        for(int i = 0; i < n ; ++i)
        {
            int r = vc[i]%3 ;
            vcc[r]++ ;
        }
        int m = n/3 ;
        int res = 0;
        bool flag = chk(vcc);
        while(flag)
        {
			if(vcc[0] > m ){
				res += vcc[0] - m ;
				vcc[1] += vcc[0] - m ;
				vcc[0] = m ;
			}
			if(vcc[1] > m)
			{
				res += vcc[1] - m  ;
				vcc[2] +=vcc[1] - m ;
				vcc[1] = m ;
			}
			if(vcc[2] > m )
			{
				res += vcc[2]-m    ;
				vcc[0] += vcc[2] - m ;
				vcc[2] = m ;
			}
			flag = chk(vcc) ;

		}
		cout << res << '\n' ;
    }
}

