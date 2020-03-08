#include <bits/stdc++.h>
using namespace std;

bool isCharInString(string s, char c)
{
    for (int i = 0; i < s.length(); i++)
        if (s[i] == c)
            return true;
    return false;
}

int main()
{
    string s;
    cin >> s;
    int count = 0;
    string str = "";
    for (int i = 0; i < s.length(); i++)
        if (!isCharInString(str, s[i]))
        {
            count++;
            str+=s[i];
        }

    if (count % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}