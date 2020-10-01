
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
vector<string> stair_path(int n)
{
    if (n == 0)
        return {""};
    else if (n < 0)
        return {};
    auto path1 = stair_path(n - 1);
    auto path2 = stair_path(n - 2);
    auto path3 = stair_path(n - 3);
    vector<string> ans;
    for (auto a : path1)
        ans.push_back("1" + a);
    for (auto a : path2)
        ans.push_back("2" + a);
    for (auto a : path3)
        ans.push_back("3" + a);
    return ans;
}

int main()
{
    return 0;
}
