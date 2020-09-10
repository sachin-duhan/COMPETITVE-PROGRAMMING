
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

int first_index(const vector<int> nums, const int val, int index)
{
    if (index < 0)
        return -1;
    int curr = INT_MAX;
    if (nums[index] == val)
        curr = index;
    int ret = first_index(nums, val, index - 1);
    if (ret >= 0 && curr >= 0)
        return min(first_index(nums, val, index - 1), curr);
    else if (ret >= 0)
        return ret;
    else
        return curr;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 2};
    cout << first_index(nums, 1, nums.size()) << endl;
    return 0;
}
