#include <bits/stdc++.h>
using namespace std;

string sortString(string s)
{
    if (s.empty())
        return "";
    map<char, int> m;
    for (int i = 0; i < s.length(); i++)
        m[s[i]]++;

    string ans = "";
    while (ans.length() < s.length())
    {
        string temp = "";
        for (auto itr = m.begin(); itr != m.end(); itr++)
            if (itr->second > 0)
            {
                temp += itr->first;
                itr->second--;
            }
        for (auto itr = m.end(); itr != m.begin(); itr--)
            if (itr->second > 0)
            {
                temp += itr->first;
                itr->second--;
            }
        ans += temp;
    }

    ans.resize(s.length());
    return ans;
}

string anotherSolution(string s)
{
    int freq[26] = {0};
    //int flag=0;
    string ret = "";
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        freq[s[i] - 'a']++;
    }
    while (ret.length() != len)
    {
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                ret += (char)(i + 'a');
                freq[i]--;
            }
        }
        for (int i = 25; i >= 0; i--)
        {
            if (freq[i] > 0)
            {
                ret += (char)(i + 'a');
                freq[i]--;
            }
        }
    }
    return ret;
}

int main()
{
    string s = "leetcode";
    cout << sortString(s) << endl;
    return 0;
}

/*

Given a string s. You should re-order the string using the following algorithm:

Pick the smallest character from s and append it to the result.
Pick the smallest character from s which is greater than the last appended character 
to the result and append it.
Repeat step 2 until you cannot pick more characters.
Pick the largest character from s and append it to the result.
Pick the largest character from s which is smaller than the last appended character 
to the result and append it.
Repeat step 5 until you cannot pick more characters.
Repeat the steps from 1 to 6 until you pick all characters from s.
In each step, If the smallest or the largest character appears more than once you can choose any 
occurrence and append it to the result.

Return the result string after sorting s with this algorithm.

Example 1:

Input: s = "aaaabbbbcccc"
Output: "abccbaabccba"
Explanation: After steps 1, 2 and 3 of the first iteration, result = "abc"
After steps 4, 5 and 6 of the first iteration, result = "abccba"
First iteration is done. Now s = "aabbcc" and we go back to step 1
After steps 1, 2 and 3 of the second iteration, result = "abccbaabc"
After steps 4, 5 and 6 of the second iteration, result = "abccbaabccba"
Example 2:

Input: s = "rat"
Output: "art"
Explanation: The word "rat" becomes "art" after re-ordering it with the mentioned algorithm.
Example 3:

Input: s = "leetcode"
Output: "cdelotee"

*/