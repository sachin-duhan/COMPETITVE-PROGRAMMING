#include <bits/stdc++.h>
using namespace std;
string solve(string str, int n)
{
    if (n < str.length())
        return str;
    stack<pair<char, int>> s;
    for (char c : str)
    {
        if (!s.empty())
        {
            if (s.top().first == c)
                s.top().second++;
            else
                s.push({c, 1});
        }
        else
            s.push({c, 1});

        if (s.top().second == n)
            s.pop();
    }
    string ans = "";
    while (!s.empty())
    {
        auto temp = s.top();
        for (int i = 0; i < temp.second; i++)
        {
            ans += temp.first;
        }
    }
    return ans;
}
int main()
{
    cout << solve("deeedbbcccbdaa", 3);
    return 0;
}