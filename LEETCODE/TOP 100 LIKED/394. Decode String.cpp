#include <bits/stdc++.h>
using namespace std;

string decodeHelper(string s, int num)
{
    int i = 0;
    string ans = "";
    while (s[i] != ']' || i < s.length() - 1)
    {
        if (isdigit(s[i]))
            ans += decodeHelper(s.substr(i + 2, s.length() - 3), int(s[i]));
        else
            ans += s[i];
        i++;
    }

    string temp = "";
    for (int i = 0; i < num; i++)
        temp += ans;
    return temp;
}
string decodeString(string s)
{
    if (s.length() == 0)
        return "";
    decodeHelper(s, 1);
}

int main()
{
    string s = "3[a]", output = decodeString(s);
    cout << output << endl;
    return 0;
}

/*
Given an encoded string, return its decoded string.

The encoding rule is: k[encoded_string], where the encoded_string inside the square 
brackets is being repeated exactly k times. Note that k is guaranteed to be a positive integer.

You may assume that the input string is always valid; No extra white spaces, square brackets are 
well-formed, etc.

Furthermore, you may assume that the original data does not contain any digits and that digits are
 only for those repeat numbers, k. For example, there won't be input like 3a or 2[4].


s = "3[a]2[bc]", return "aaabcbc".
s = "3[a2[c]]", return "accaccacc".
s = "2[abc]3[cd]ef", return "abcabccdcdcdef".

*/