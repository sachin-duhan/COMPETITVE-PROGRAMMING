
#include <bits/stdc++.h>
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

vector<int> solve(string s, string c)
{
    int n = s.length(), m = c.length();
    if (m > 1)
    {
        vector<int> ans(n, n);
        return ans;
    }
    int curr = (to_string(s[0]) == c) ? INT_MAX : 0;
    vector<int> ans(n, INT_MAX);
    cout << ans[0] << endl;
    for (int i = 1; i < n; i++)
    {
        if ((s[i]+"") == c)
            curr = 0;
        cout << "[1] - value of distance is " << curr << " and prev = " << ans[i - 1] << endl;
        ans[i] = curr++;
    }
    curr = (s[n-1] + "" == c) ? INT_MAX : 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if ((s[i]+"") == c)
        {
            cout << "we have a match!" << endl;
            curr = 0;
        }
        cout << "[2] - value of distance is " << curr << endl;
        ans[i] = min(ans[i + 1] + 1, curr++);
    }
    return ans;
}

int main()
{
    string s = "aabaab", c = "b";
    auto ans = solve(s, c);
    cout << endl;
    for (auto a : ans)
        cout << a << " ";
    cout << endl;
    return 0;
}
