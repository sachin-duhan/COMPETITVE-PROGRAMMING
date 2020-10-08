
#include<bits/stdc++.h>
using namespace std;

/*===== TREENODE CODE =====
struct TreeNode {
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode * left, TreeNode * right): val(x), left(left), right(right) {}
};
*/

/* == GRAPH NODE TEMPLATE CODE ===
struct Node {
    int val;
    vector < Node * > neighbors;
    Node(): val(0), neighbors({}) {};
    Node(int x): val(x), neighbors({}) {};
    Node(int x, vector < Node * > neighbors): val(x), neighbors(neighbors) {};
};
*/

class Solution
{
public:
    bool func(string &s, int index, vector<string> &wordDict, vector<int> &dp)
    {
        // if()
        if (index >= s.length())
            return 1;

        if (dp[index] != -1)
            return dp[index];

        string m = "";
        dp[index] = 0;

        for (int i = index; i < s.length(); i++)
        {
            m += s[i];
            if (find(wordDict.begin(), wordDict.end(), m) != wordDict.end())
            {
                if (func(s, i + 1, wordDict, dp))
                    return dp[index] = 1;
            }
        }

        return dp[index];
    }
    bool wordBreak(string s, vector<string> &wordDict)
    {
        int n = s.length();

        vector<int> dp(n + 1, -1);

        return func(s, 0, wordDict, dp);
    }
};

int main(){
    return 0;
}
