#include <bits/stdc++.h>
using namespace std;
const int INF = 1000 * 1000 * 1000;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
    int n;
    cin >> n;
    vector<int> vc(n);
    vector<int> mx(n + 1, -1);
    mx[1] = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> vc[i];
        if (i != 0)
        {
            if (vc[mx[i]] <= vc[i])
            {
                mx[i + 1] = i;
            }
            else
            {
                mx[i + 1] = mx[i];
            }
        }
    }
    int cnt = n;
    vector<int> res;
    while (cnt > 0)
    {
        for (int i = mx[cnt]; i < cnt; ++i)
        {
            res.push_back(vc[i]);
        }
        cnt = mx[cnt];
    }
    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << "\n";
    }
    return 0;
}
