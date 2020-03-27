#include <bits/stdc++.h>
using namespace std;

string getPermutation(int n, int k)
{

    vector<int> t;
    string res = "";
    t.push_back(0);
    for (int i = 1; i <= n; i++)
        t.push_back(i);

    while (n > 1)
    {
        int a = fac(n - 1);
        int i;
        for (i = 1; i <= n; i++)
            if (k <= a * i)
                break;
        int b = find_num(t, i);
        k -= (a * (i - 1));
        res += (b + '0');
        n--;
    }
    int b = find_num(t, 1);
    res += (b + '0');
    return res;
}

int fac(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fac(n - 1);
}

int find_num(vector<int> &nums, int n)
{
    int temp = nums[n];
    nums.erase(nums.begin() + n);
    return temp;
}

int main()
{
    int n = 3, k = 5;
    string ans = getPermutation(n, k);
    return 0;
}