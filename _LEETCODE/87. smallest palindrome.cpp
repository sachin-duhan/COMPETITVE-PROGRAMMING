#include<bits/stdc++.h>
using namespace std;

class Solution
{
    int get_num(int n, bool isBig = false)
    {
        if (isBig)
            return 0;
        else if (n < 2)
            return n;
        else if (n <= 3)
            return 3;
        else if (n <= 5)
            return 5;
        else if (n <= 7)
            return 7;
        else
            return -1;
    }

public:
    int primePalindrome(int N)
    {
        if (N < 10)
            return get_num(N, false);
        vector<int> nums;
        while (N)
        {
            nums.push_back(N % 10);
            N /= 10;
        }

        int n = nums.size();
        reverse(nums.begin(), nums.end());
        int i = 0, j = n - 1;
        bool big = false;
        while (i <= j)
        {
            int x = min(get_num(nums[i], big), get_num(nums[j], big));
            if (x > nums[i])
                big = true;
            nums[i] = x;
            nums[j] = x;

            if (!big && j - i <= 1)
            {
                int temp = min(get_num(nums[i] + 1), get_num(nums[j] + 1));
                nums[i] = temp;
                nums[j] = temp;
            }
            i++;
            j--;
        }

        i = 0;
        int ans = 0;
        for (auto a : nums)
        {
            if (a == -1)
                return pow(10, n + 1) + 1;
            ans += nums[i] * pow(10, n - i - 1);
            i++;
        }
        return ans;
    }
};
