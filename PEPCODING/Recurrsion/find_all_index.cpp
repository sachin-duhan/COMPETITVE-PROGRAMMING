
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

vector<int> find_all(vector<int> nums, int i, int val)
{
    if (i >= nums.size())
        return {};    
    if (nums[i] == val)
    {
        auto temp = find_all(nums, i+1, val);
        temp.push_back(nums[i]);
        return temp;
    }
    return find_all(nums, i++, val);
}

int main()
{
    return 0;
}
