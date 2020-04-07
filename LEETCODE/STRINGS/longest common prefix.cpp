#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string ans = "";
    if (strs.size() == 0) return ans;
    if (strs.size() == 1) return strs[0];
    int mini = INT_MAX;
    for (int j = 0; j < strs.size(); j++)
        mini = strs[j].size() > mini ? strs[j].size() : mini;

    for (int i = 0; i < mini; i++)
    {
        bool common = true;
        char c = strs[0][i];
        for (int j = 0; j < strs.size(); j++)
        {
            if (strs[j][i] != c)
            {
                common = false;
                break;
            }
        }
        if (!common)
            return ans;
        else
            ans += c;
    }
    return ans;
}

int main()
{
    vector<string> strs{"",""};
    cout << longestCommonPrefix(strs) << endl;
    return 0;
}