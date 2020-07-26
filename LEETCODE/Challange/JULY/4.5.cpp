#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int addDigits(int num)
    {
        int ans = 0;
        while (num)
        {
            ans += num % 10;
            num /= 10;
        }
        if (ans / 10 == 0)
            return ans;
        else
            return addDigits(ans);
    }
};

class Solution
{
public:
    int addDigits(int num)
    {
        if (num == 0)
            return num;
        return (num - 1) % 9 + 1;
    }
};

int main()
{
    Solution solve;
    cout << solve.addDigits(1127192) << endl;

    return 0;
}