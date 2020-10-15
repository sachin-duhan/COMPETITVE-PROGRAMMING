
#include <bits/stdc++.h>
using namespace std;

void helper(string str, int index, map<string, int> words_map, string ans)
{
    cout << ans << endl;
    if (index >= str.length())
    {
        cout << ans << endl;
        return;
    }

    string temp = "";
    for (int i = index; i < str.length(); i++)
    {
        char c = str[i];
        temp += c;
        if (words_map.find(temp) != words_map.end())
            helper(str, i + 1, words_map, ans + "-" + temp);
    }
}

void word_break(string str, vector<string> words)
{
    map<string, int> words_map;
    for (string word : words)
        words_map[word]++;

    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        temp += str[i];
        if (words_map.find(temp) != words_map.end())
            helper(str, i + 1, words_map, temp);
    }
}

int main()
{
    vector<string> words = {"micro", "soft", "hi", "ring", "mircosoft"};
    word_break("mircosofthiring", words);
    return 0;
}
