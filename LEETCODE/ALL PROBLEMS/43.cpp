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

class Solution2
{
public:
    string multiply(string num1, string num2)
    {
        if (num1 == "0" || num2 == "0")
            return "0";
        if (num1 == "1")
            return num2;
        if (num2 == "1")
            return num1;
        int n = num1.length(), m = num2.length();
        vector<int> result(n + m, 0);
        for (int i = m - 1; i >= 0; i--)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                int sum = (num2[i] - '0') * (num1[j] - '0') + result[i + j + 1];
                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }
        string res;
        for (int num : result)
        {
            if (res.empty() && num == 0)
                continue; //Remove Leading Zeros
            res += to_string(num);
        }
        return res;
    }
};
int main()
{
}