#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<string> custom_split(string str)
    {
        vector<string> ans;
        string curr = "";
        int i = 0, n = str.length();
        while (i < n)
        {
            if (str[i] == ' ')
            {
                ans.push_back(curr);
                curr = "";
            }
            else curr += str[i];
            i++;
        }
        ans.push_back(curr);
        return ans;
    }

public:
    bool wordPattern(string pattern, string str)
    {
        map<char, string> m;
        map<string,char> m2;
        vector<string> words = custom_split(str);
        if(words.size() != pattern.length()) return false;
        for(int i=0;i<pattern.size();i++){
            char c = pattern[i];
            if(m.find(c) != m.end()){
                if (m[c] != words[i]) return false;
            } else m[c] = words[i];   
        }
        return true;
    }
};


int main()
{
    Solution solve;
    solve.wordPattern("aab","sachin duhan is dancing and singing");
    return 0;
}