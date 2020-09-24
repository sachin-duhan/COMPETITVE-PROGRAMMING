
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    pair<string, string> get_username_and_domain(string email)
    {
        if (email.find("@") == string::npos)
            return {"", ""};
        string user_name = "", domain = "";
        bool flag = false;
        for (int i = 0; i < email.length(); i++)
        {
            char c = email[i];
            if (c == '.')
                continue;
            else if (c == '+')
            {
                char temp = c;
                while (temp != '@')
                    temp = email[++i];
                continue;
            }
            else if (c == '@')
                flag = true;

            if (!flag)
                user_name += c;
            else
                domain += c;
        }
        return {user_name, domain};
    }

public:
    int numUniqueEmails(vector<string> &emails)
    {
        map<string, int> m;
        for (auto email : emails)
        {
            auto und = get_username_and_domain(email); // und = user and domain;
            string key = und.first + und.second;
            m[key]++;
        }
        for (auto a : m)
            cout << a.first << endl;
        return int(m.size());
    }
};
int main()
{
    vector<string> email({"test.email+alex@leetcode.com", "test.e.mail+bob.cathy@leetcode.com", "testemail+david@lee.tcode.com"});
    Solution solve;
    cout << solve.numUniqueEmails(email) << endl;
    return 0;
}
