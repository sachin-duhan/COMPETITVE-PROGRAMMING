#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> partitionLabels(string S)
    {
        vector<int> chars(26, 0);
        for (int i = 0; i < S.length(); i++)
            chars[S[i] - 'a'] = i;
        int j = 0, anchor = 0;
        vector<int> ans;
        for (int i = 0; i < S.length(); i++)
        {
            j = max(j, chars[S[i] - 'a']);
            if (i == j)
            {
                ans.push_back(i - anchor + 1);
                anchor = i + 1;
            }
        }
        return ans;
    }
};

int main()
{

    Solution solve;
    auto val = solve.partitionLabels("acababcbacadefegdehijhklijb");
    for (int a : val)
        cout << a << " ";
    cout << "\n";
    return 0;
}