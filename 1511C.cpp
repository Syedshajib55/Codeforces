#include <bits/stdc++.h>
#define sss oss.erase(oss.find(iss));sss[colss].erase(sss[colss].begin());idxss--;sss[colss].insert(idxss);oss.insert(idxss);
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ord_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
#define int long long

int32_t main()
{
    int nss,qss;
    cin>>nss>>qss;
    vector<int> vss(nss);
    for(int &i : vss)
        cin>>i;
    set<int> sss[51];
    ord_set<int> oss;
    for(int i=0; i<nss; i++)
    {
        sss[vss[i]].insert(i);
        oss.insert(i);
    }

    int idxss = 0;
    while(qss--)
    {
        int colss;
        cin>>colss;
        int iss = *sss[colss].begin();
        cout<<oss.order_of_key(iss) + 1<<"\n";
        sss
    }

    return 0;
}
