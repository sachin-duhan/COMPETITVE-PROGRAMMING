
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

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        vector<vector<int>> result;
        
        for (size_t i = 0; i < intervals.size(); i++)
        {
            if (intervals[i][1] < newInterval[0])
                result.push_back(intervals[i]);
            else if (intervals[i][0] > newInterval[1])
            {
                result.push_back(newInterval);
                newInterval = intervals[i]; 
            }
            else if(intervals[i][1] >= newInterval[0] || intervals[i][0] <= newInterval[1])
            {
                newInterval[0] = (min(intervals[i][0], newInterval[0]));
                newInterval[1] = (max(newInterval[1], intervals[i][1]));

            }
        }
        result.push_back(newInterval); 
        return result;
    }
};

int main(){
    return 0;
}
