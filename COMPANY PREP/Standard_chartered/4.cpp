// char with max freq
#include <bits/stdc++.h>
using namespace std;
char max_freq(string s)
{
    if (!s.length())
        return '_';
    int freq[26];
    for (int i = 0; i < 26; i++)
        freq[i] = 0;
    for (char c : s)
        freq[c - 'a']++;

    int max_val = 0, index = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max_val < freq[i])
        {
            max_val = freq[i];
            index = i;
        }
    }
    return char('a' + index);
}

int main()
{
    string s = "";
    cout << max_freq(s) << endl;
    return 0;
}