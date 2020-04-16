#include <bits/stdc++.h>
using namespace std;
bool checkValidString(string s)
{
    int low = 0, high = 0;
    for (char c : s)
    {
        low += c == ')' ? 1 : -1;
        high += c != '(' ? 1 : -1;
        if (high < 0)
            break;
        low = max(low, 0);
    }
    return low == 0;
}

int main()
{
    string s = "(*))";
    return 0;
}
