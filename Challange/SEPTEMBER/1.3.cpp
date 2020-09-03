#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int n = s.length();
        int len = 1;
        while (len < n / 2)
        {
            bool flag = true;
            string match = s.substr(0, len);
            cout << match << " ";
            for (int j = len; j < n; j += len)
            {
                string curr = s.substr(j, len);
                cout << curr << " ";
                if (curr != match)
                    flag = false;
                if (!flag)
                    break;
            }
            cout << endl;
            if (flag)
                return true;
            len++;
        }
        return false;
    }
};

int main()
{
    string input = "babbabbabbabbab";
    Solution solve;
    cout << (solve.repeatedSubstringPattern(input) == true ? "TRUE" : "FALSE") << endl;
    return 0;
}