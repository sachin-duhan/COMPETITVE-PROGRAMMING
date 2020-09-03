#include <bits/stdc++.h>
using namespace std;

class Solution
{

private:
    bool ipv4_check(string s)
    {
        if (s.length() > 15)
            return false;
        regex ipv4("(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])");
        return regex_match(s.begin(), s.end(), ipv4);
    }

    bool ipv6_check(string s)
    {
        regex ipv6("((([0-9a-fA-F]){1,4})\\:){7}([0-9a-fA-F]){1,4}");
        return regex_match(s.begin(), s.end(), ipv6);
    }

public:
    string validIPAddress(string IP)
    {
        vector<string> ans{"Neither", "IPv4", "IPv6"};
        bool is_ipv4 = false;
        for (char a : IP)
        {
            if (a == '.')
            {
                is_ipv4 = true;
                break;
            }
            else if (a == ':')
            {
                break;
            }
        }
        if (is_ipv4 && ipv4_check(IP))
            return ans[1];
        else if (!is_ipv4 && ipv6_check(IP))
            return ans[2];
        return ans[0];
    }
};