
#include<bits/stdc++.h>
using namespace std;

vector<string> ans;
void helper(const string &str, int i, map<char, string> &m, string asf)
{
    if (str[i] == '1')
        return;
    if (i >= str.length())
    {
        ans.push_back(asf);
        return;
    }

    char ch = str[i];
    for (char c : m[ch])
    {
        string temp = asf + c + "";
        helper(str, i + 1, m, temp);
    }
}
vector<string> solve(string digits)
{
    map<char, string> m;
    ans.clear();
    m['2'] = "abc";
    m['3'] = "def";
    m['4'] = "ghi";
    m['5'] = "jkl";
    m['6'] = "mno";
    m['7'] = "pqrs";
    m['8'] = "tuv";
    m['9'] = "wxyz";
    helper(digits, 0, m, "");
    return ans;
}

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

int main(){
    return 0;
}
