#include <bits/stdc++.h>
using namespace std;

int largestSumAfterKNegations(vector<int> &A, int K)
{
    return K % 2 == 0 ? accumulate(A.begin(), A.end(), 0) : accumulate(A.begin(), A.end(), 0) - *min_element(A.begin(), A.end());
}

int main()
{
    vector<int> val{3, -1, 0, 2};
    cout << largestSumAfterKNegations(val, 3) << endl;
    return 0;
}