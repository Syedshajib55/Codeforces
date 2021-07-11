#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int N,K1, K2, W, B;
        cin>>N>>K1>>K2>>W>>B;
        int tot1 = min( K1,K2);
        tot1 += (K1-tot1)/2 + (K2-tot1)/2;

        K1= N-K1;
        K2 = N-K2;
        int tot2 = min( K1,K2);
        tot2 += (K1-tot2)/2 + (K2-tot2)/2;
        if( tot1<W || tot2<B)
            cout<<"NO"<<"\n";
        else cout<<"YES" <<"\n";
    }
}


