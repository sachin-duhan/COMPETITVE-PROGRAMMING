#include <bits/stdc++.h>
using namespace std;

vector<string> res;
void helper(int n, string &s, int left, int right)
{
    if (s.size() == n * 2)
    {
        res.push_back(s);
        return;
    }

    if (left < n)
    {
        s.push_back('(');
        helper(n, s, left + 1, right);
        s.pop_back();
    }

    if (right < left)
    {
        s.push_back(')');
        helper(n, s, left, right + 1);
        s.pop_back();
    }
}
vector<string> generateParenthesis(int n)
{
    if (n == 0)
        return res;
    string s = "";
    helper(n, s, 0, 0);
    return res;
}

int main()
{
    int n = 3;
    vector<string> S = generateParenthesis(n);
    for (auto str : S)
        cout << str << endl;
    return 0;
}