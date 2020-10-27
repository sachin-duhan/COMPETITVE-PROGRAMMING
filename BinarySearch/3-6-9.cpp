#include <bits/stdc++.h>
using namespace std;

vector<string> solve(int n)
{
    vector<string> ans;
    for (int i = 1; i <= n; i++)
    {
        string word = to_string(i);
        if (i % 3 == 0)
            ans.push_back("clap");
        else
        {
            bool flag = false;
            for (char c : word)
            {
                if (c == '6' || c == '3' || c == '9')
                {
                    ans.push_back("clap");
                    flag = true;
                    break;
                }
            }
            if (!flag)
                ans.push_back(word);
        }
    }
    return ans;
}