
#include <bits/stdc++.h>
using namespace std;

int ans = INT_MIN;
void helper(const vector<string> &words, vector<int> ch_count, int index, vector<bool> isAdded)
{
    if (index > words.size() || isAdded[index])
        return;
    string word = words[index];
    for (char c : word)
    {
        ch_count[c - 'a']++;
        if (ch_count[c - 'a'] > 1)
            return;
    }
    isAdded[index] = true;
    int word_length = count(ch_count.begin(), ch_count.end(), 1);
    ans = max(ans, word_length);
    for (int i = 0; i < words.size(); i++)
    {
        if (!isAdded[i])
            helper(words, ch_count, i, isAdded);
    }
}

int solve(const vector<string> &words)
{
    if (words.size() <= 1)
        return words.size();
    for (int i = 0; i < words.size(); i++)
    {
        string word = words[i];
        vector<bool> isAdded(words.size(), false);
        vector<int> ch(26, 0);
        bool flag = true;
        for (char c : word)
        {
            ch[c - 'a']++;
            if (ch[c - 'a'] > 1)
                flag = false;
        }
        isAdded[i] = true;
        if (flag)
            helper(words, ch, i, isAdded);
    }
    return ans == INT_MIN ? 0 : ans;
}

int main()
{
    return 0;
}
