#include <bits/stdc++.h>
using namespace std;

bool parMatch(char a, char b)
{
    if (a == '(' && b == ')')
        return true;
    else if (a == '[' && b == ']')
        return true;
    else if (a == '{' && b == '}')
        return true;
    else
        return false;
}

bool isValid(string str)
{
    int n = str.length();
    if (n == 0)
        return true;
    else if (n % 2 != 0)
        return false;
    stack<char> s;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
            s.push(str[i]);
        else
        {
            if (!s.empty() && parMatch(s.top(), str[i]))
                s.pop();
            else
                return false;
        }
    }

    return s.empty() ? true : false;
}

int main()
{
    string s = "){";
    cout << isValid(s) << endl;
    return 0;
}