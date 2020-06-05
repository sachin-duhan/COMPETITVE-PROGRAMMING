#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string check_front(string s)
    {
        string ans;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                ans += '0';
            else
                break;
        }
        return ans;
    }

    string multiply(string num1, string num2)
    {
        int n = stoi(num1), m = stoi(num2);
        string ans;
        if (n == 0)
            return num1;
        if (m == 0 && num2.length() == 1)
            return "0";
        ans += check_front(num1);
        ans += check_front(num2);
        return (ans + to_string(n * m));
    }
};

int main()
{
}