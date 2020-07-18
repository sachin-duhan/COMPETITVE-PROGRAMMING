#include <bits/stdc++.h>
using namespace std;

class Solution
{
};
vector<string> helper(int n, int prefix)
{
    vector<string> temp {}
}

string getPermutation(int n, int k)
{
    vector<int> factorial(n, 1), digits(n, 1);
    for (int i = 1; i < n; i++)
    {
        factorial[i] = factorial[i - 1] * (i + 1);
        digits[i] = i + 1;
    }
    string result = "";
    while (result.size() < n - 1)
    {
        int repeat = factorial[factorial.size() - 2];
        int nextTerm = (k - 1) / repeat;
        result += to_string(digits[nextTerm]);
        digits.erase(digits.begin() + nextTerm);
        factorial.pop_back();
        k %= repeat;
        if (k == 0)
            for (int i = digits.size() - 1; i >= 0; i--)
                result += to_string(digits[i]);
    }
    if (result.size() < n)
        result += to_string(digits[0]);
    return result;
}

int main()
{
    cout << getPermutation(4, 2);
    return 0;
}