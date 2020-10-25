
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

int _maxVal = INT_MIN;
int helper(vector<int> &nums, int i, int last, int slast)
{
    if (i >= nums.size())
        return 0;
    int ans = INT_MIN;
    for (int k = i; k < nums.size(); k++)
        if (last + slast == nums[k])
            ans = max(ans, helper(nums, k + 1, nums[k], last));
    // else if(last + slast > nums[k]) break;
    if (ans == INT_MIN)
        return 0;
    return ans + 1;
}

int solve(vector<int> &nums)
{
    int len = nums.size();
    int ans = 0;
    _maxVal = *max_element(nums.begin(), nums.end());
    for (int i = 0; i < len; i++)
        for (int j = i + 1; j < len; j++)
            if (nums[i] + nums[j] <= _maxVal)
                ans = max(ans, helper(nums, j + 1, nums[j], nums[i]));
    return (ans > 0) ? ans + 2 : 0;
}

int main(){
    return 0;
}
