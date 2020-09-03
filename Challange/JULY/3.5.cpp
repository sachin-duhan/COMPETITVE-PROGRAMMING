#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    pair<char, int> getVal(int x, int y, int carry)
    {
        int val = x ^ y ^ carry;
        carry = (x + y + carry > 1) ? 1 : 0;
        return {val + '0', carry};
    }
    string addBinary(string a, string b)
    {
        string ans = "";
        int carry = 0;
        while (a.length() && b.length())
        {
            auto p = getVal(a.back() - '0', b.back() - '0', carry);
            carry = p.second;
            ans += p.first;
            a.pop_back();
            b.pop_back();
        }
        while (a.length())
        {
            auto p = getVal(a.back() - '0', 0, carry);
            carry = p.second;
            ans += p.first;
            a.pop_back();
        }
        while (b.length())
        {
            auto p = getVal(0, b.back() - '0', carry);
            carry = p.second;
            ans += p.first;
            b.pop_back();
        }
        if (carry)
            ans += '1';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};