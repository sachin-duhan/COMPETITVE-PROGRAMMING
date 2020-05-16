#include <bits/stdc++.h>
using namespace std;

string trim(string s)
{
    string ans = "";
    for (char c : s)
        if (c != ' ')
            ans += c;
    return ans;
}

string reverseWords(string s)
{
    vector<string> words;
    s += ' ';
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            string val = trim(temp);
            if (val != "")
                words.push_back(val);
            temp = "";
        }
        else
        {
            temp += s[i];
        }
    }
    reverse(words.begin(), words.end());
    string ans = "";
    for (int i = 0; i < words.size(); i++)
    {
        if (i == words.size() - 1)
            ans += words[i];
        else
            ans += words[i] + ' ';
    }
    return ans;
}

int main()
{
    cout << "/" << reverseWords("a good   example") << "/";
    return 0;
}