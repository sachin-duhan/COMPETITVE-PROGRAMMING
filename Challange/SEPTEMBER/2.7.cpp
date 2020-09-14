
#include<bits/stdc++.h>
using namespace std;

class Solution {
    int ans =0 ;
    void rob_helper(vector<int>houses,int index =0, int curr=0){
        ans = max(ans,curr);
        if(index >= houses.size())return;
        rob_helper(houses,index+1,curr);
        rob_helper(houses,index+2,curr+houses[index]);
    }
public:
    int rob(vector<int>& nums) {
        rob_helper(nums);
        return ans;
    }
};

class Solution
{
public:
    int Fun(vector<int> &nums, int index)
    {
        if (index >= nums.size())
            return 0;
        return max(nums[index] + Fun(nums, index + 2), Fun(nums, index + 1));
    }
    int rob(vector<int> &nums)
    {
        return Fun(nums, 0);
    }
};


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
