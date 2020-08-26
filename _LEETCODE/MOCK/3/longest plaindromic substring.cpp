#include <string>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int current = 0, first = 0, last = 0;
        string res = "";
        while (current < s.length())
        {
            first = current;
            last = current;
            while (true)
            {
                if (s.length() != last && s[first] == s[last])
                    last++;
                else
                    break;
            }
            current = last - 1;
            first--;
            while (true)
            {
                if (last == s.length())
                    break;
                if (first < 0)
                    break;
                if (s[first] == s[last])
                {
                    first--;
                    last++;
                }
                else
                    break;
            }
            if (res.length() < last - first)
                res = s.substr(first + 1, last - first - 1);
            current++;
        }
        return res;
    }
};