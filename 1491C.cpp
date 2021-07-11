#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc-- )
    {
        long long uss,vss;
        cin >> uss >> vss;
        if (uss > vss || __builtin_popcount(uss) < __builtin_popcount(vss))
        {
            int g=1;
        }
        else
        {
            while (uss< vss)
            {
                while ((uss & 1) == (vss & 1))
                {
                    uss >>= 1;
                    vss >>= 1;
                }
                if (vss != 0) {int gg=1;}
                else break;
                if ((uss & 1) >= (vss & 1)){int gg=1;}else break;
                long long xss = uss,yss = 0;
                while ((xss & 1) && (uss + ((yss << 1) + 1) <= vss))
                {
                    xss >>= 1;
                    yss = (yss << 1) + 1;
                }
                uss += yss;
            }
        }
        if (uss != vss) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}
