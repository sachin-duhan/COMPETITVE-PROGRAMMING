#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSumAfterPartitioning(vector<int> &A, int K)
    {
        vector<int> arr(A.size() + 1, 0);
        int n = A.size();
        for (int i = 1; i <= n; i++)
        {
            int curr = INT_MIN;
            for (int j = i - 1; j >= i - K && j >= 0; j--)
            {
                curr = max(curr, A[j]);
                arr[i] = max(arr[i], arr[j] + curr * (i - j));
            }
        }
        return arr[n];
    }
};

int main()
{
    Solution solve;
    vector<int> input{13, 4, 3, 5, 4, 43, 56, 6, 7};
    cout << solve.maxSumAfterPartitioning(input, 4) << endl;
    return 0;
}