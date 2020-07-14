#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int carry = 0;
        string str = "";
        int i = 0, _a = a.length(), _b = b.length();
        int n = min(_a,_b);
        while (i < n)
        {
            int x = a[i] == 1 ? 1 : 0, y = b[i] == 1 ? 1 : 0;
            int s = x + y + carry;
            if (s > 1)
            {
                carry = 1;
                str += '0';
            }
            else
                str += s == 0 ? '0' : '1';
            i++;
        }
        if (n == _a && n == _b)
        {
            if (carry == 1)
                str += '1';
            return str;
        }
        n = _a > _b ? _a : _b;
        string temp = _a > _b ? a : b;
        while (i < n)
        {
            int x = temp[i] == 1 ? 1 : 0;
            int s = x + carry;
            if (s > 1)
            {
                carry = 1;
                str += '0';
            }
            else
                str += s == 0 ? '0' : '1';
            i++;
        }
        if(carry == 1) str += '1';
        return str;
    }
};

int main()
{
    Solution solve;
    cout << solve.addBinary("111", "111");
    return 0;
}