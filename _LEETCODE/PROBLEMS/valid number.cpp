#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isNumber(string s)
    {
        int len = s.length();
        bool sign = false;
        bool num = false;
        bool point = false;
        bool e = false;

        int i = 0;
        while (i < len && s[i] == ' ')
            i++;

        for (; i < len; i++)
        {
            if (isdigit(s[i]))
                num = true;
            else if (s[i] == '+' || s[i] == '-')
            {
                if (num || point)
                    return false;
                if (!sign)
                    sign = true;
                else
                    return false;
            }
            else if (s[i] == '.')
            {
                if (e)
                    return false;
                if (!point)
                    point = true;
                else
                    return false;
            }
            else if (s[i] == 'e')
            {
                if (!num)
                    return false;
                if (!e)
                    e = true;
                else
                    return false;
                sign = false;
                point = false;
                num = false;
                continue;
            }
            else
                break;
        }
        while (i < len && s[i] == ' ')
            i++;
        return num && i == len;
    }
};
