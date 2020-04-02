#include <bits/stdc++.h>
using namespace std;

int largestSumAfterKNegations(vector<int> &A, int K)
{
    if (K != 0)
        for (int i = 0; i < K; i++)
        {
            auto itr = min_element(A.begin(), A.end());
            *itr = -(*itr);
        }
    return accumulate(A.begin(), A.end(), 0);
}

int main()
{
    vector<int> val{3, -1, 0, 2};
    cout << largestSumAfterKNegations(val, 2) << endl;
    return 0;
}