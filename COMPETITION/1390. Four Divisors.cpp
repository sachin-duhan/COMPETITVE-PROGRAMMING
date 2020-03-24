#include <bits/stdc++.h>
using namespace std;

void divisors(int n, vector<int> &temp)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                temp.push_back(i);
            else
            {
                temp.push_back(i);
                temp.push_back(n / i);
            }
        }
    }
}

int sumFourDivisors(vector<int> &nums)
{
    double ans = 0;
    if (nums.size() == 0)
        return 0;
    for (int i = 0; i < nums.size(); i++)
    {
        vector<int> temp;
        divisors(nums[i], temp);
        if (temp.size() == 4)
            ans += accumulate(temp.begin(), temp.end(), ans);
    }
    return ans;
}

int main()
{
    vector<int> nums({21, 4, 7});
    cout << sumFourDivisors(nums) << endl;
    return 0;
}