
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

vector<vector<int>> merge_interval(vector<vector<int>> nums)
{
    int n = nums.size();
    if (!n) return {{}};
    sort(nums.begin(), nums.end(), [](auto &a, auto &b) { return a[0] == b[0] ? a[1] < b[1] : a[0] < b[0]; });
    vector<vector<int>> ans;
    ans.push_back(nums[0]);

    for (int i = 1; i < n; i++)
    {
        cout << nums[i][0]<< "----" << endl;
        if (ans[i - 1][1] >= nums[i][0])
            ans[i - 1][1] = max(ans[i - 1][1], nums[i][1]);
        else ans.push_back(nums[i]);
    }

    for (auto a : ans)
        cout << a[0] << " " << a[1] << endl;
    return ans;
}

int main()
{
    vector<vector<int>> nums = {{1, 2}, {3, 4}, {7, 8}, {4, 5}, {6, 9}, {6, 7}};
    merge_interval(nums);
    return 0;
}
