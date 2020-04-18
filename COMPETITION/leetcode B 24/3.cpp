// COMPETITION TIME OVER!!
//TLE

#include <bits/stdc++.h>
using namespace std;

map<string, int> m;
string helper(string s, int n)
{
    if (s.length() > n)
        return s;
    if (s.length() == n)
    {
        if (m.find(s) != m.end())
            m.insert(make_pair(s, 1));
    }
    vector<char> input{'a', 'b', 'c'};
    if (s.size() == 0)
    {
        for (char c : input)
            helper(s + c, n);
    }
    else
    {
        int n = s.length();
        for (int i = 0; i < 3; i++)
        {
            if (s[n - 1] == input[i])
            {
                input.erase(input.begin() + i);
                for (char c : input)
                    helper(s + c, n);
                input.push_back(s[n - 1]);
            }
        }
    }
}

string getHappyString(int n, int k)
{
    helper("", n);
    auto itr = m.begin();
    while (k--)
        itr++;
    return itr->first;
}

int main()
{

    return 0;
}