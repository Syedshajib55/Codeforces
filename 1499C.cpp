#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tss;
    cin >> tss;
    while (tss--)
    {
        int nss;
        cin >> nss;
        vector<int64_t> css(nss);
        for (int i = 0; i < nss; ++i)
        {
            cin >> css[i];
        }
        int64_t minSumss{ numeric_limits<int64_t>::max() };
        vector<int64_t> minOddIdxss(nss, 1);
        vector<int64_t> minEvenIdxss(nss, 0);
        vector<int64_t> sumOddss(nss, 0);
        vector<int64_t> sumEvenss(nss, 0);
        for (int i = 0; i < nss; ++i)
        {
            if (i % 2 != 0)
            {
             sumOddss[i] = css[i];
                if (i - 2 < 0)
                {
                    int gg=1;
                }
                else
                {
                    sumOddss[i] += sumOddss[i - 2];
                }
                minOddIdxss[i] = i;
                if (i - 2 < 0 || css[minOddIdxss[i - 2]] >= css[i])
                {
                    int gg=1;
                }
                else
                {
                    minOddIdxss[i] = minOddIdxss[i - 2];
                }
            }
            else
            {
                   sumEvenss[i] = css[i];
                if (i - 2 <0)
                {
                    int gg=1;
                }
                else
                {
                    sumEvenss[i] += sumEvenss[i - 2];
                }
                minEvenIdxss[i] = i;
                if (i - 2 <0 || css[minEvenIdxss[i - 2]] >= css[i])
                {
                    int gg=1;
                }
                else
                {
                    minEvenIdxss[i] = minEvenIdxss[i - 2];
                }
            }
        }
        for (int stepsss = 2; stepsss < nss + 1; ++stepsss)
        {
            const int evenStepCntss{ (stepsss + 1) / 2 };
            const int oddStepCntss{ stepsss / 2 };
            int64_t currSumss{ 0 };
            if (stepsss % 2 != 0)
            { currSumss += sumEvenss[stepsss- 1] + sumOddss[stepsss - 2];
                currSumss += (nss - evenStepCntss) * css[minEvenIdxss[stepsss - 1]];
                currSumss += (nss - oddStepCntss) * css[minOddIdxss[stepsss- 2]];

                     }
            else
            { currSumss += sumOddss[stepsss - 1] + sumEvenss[stepsss - 2];
                currSumss += (nss- oddStepCntss) * css[minOddIdxss[stepsss - 1]];
                currSumss += (nss - evenStepCntss) * css[minEvenIdxss[stepsss - 2]];

                 }
            minSumss = min(minSumss, currSumss);
        }
        cout << minSumss << '\n';
    }
    return 0;
}
