#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSteps(int n)
    {
        int curr = 1, count = 0, buffer = 0;
        while (curr < n)
        {
            int rest = n - curr;
            if (rest % curr == 0)
            {
                buffer = curr;
                curr += buffer;
                count += 2;
            }
            else
            {
                curr += buffer;
                count++;
            }
        }
        return count;
    }
};

int main()
{
    int c(100);
    Solution solve;
    cout << solve.minSteps(c) << endl;
    return 0;
}