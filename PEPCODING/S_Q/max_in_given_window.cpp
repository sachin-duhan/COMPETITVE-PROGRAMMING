
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

/// brootforce approach!!
vector<int> max_in_given_window(vector<int> nums, int k)
{
    int n = nums.size();
    if (n == k)
        return {*max_element(nums.begin(), nums.end())};
    else if (k == 0)
        return nums;
    vector<int> ans;
    for (size_t i = 0; i < n; i++)
    {
        int curr_max = INT_MIN;
        for (size_t j = i; j < i + k && j < n; j++)
            curr_max = max(curr_max, nums[j]);
        ans.push_back(curr_max);
    }
    return ans;
}

// better approach;
vector<int> max_in_given_window(vector<int> nums, int k)
{
    int n = nums.size();
    if (k >= n)
        return {*max_element(nums.begin(), nums.end())};
    else if (k == 0)
        return nums;
    vector<int> ans;
    map<int, int, greater<int>> m;
    for (size_t i = 0; i < k; i++)
        m[nums[i]] = i;
    int i = 1, j = k - 1;
    auto itr = m.begin();
    ans.push_back(itr->first);
    while (j++ < n)
    {
        i++;
        auto itr = m.begin();
        while (itr->second < i)
        {
            m.erase(itr);
            m[nums[j]] = j;
            itr = m.begin();
        }
        ans.push_back(itr->first);
    }
    return ans;
}

int main()
{
    return 0;
}
