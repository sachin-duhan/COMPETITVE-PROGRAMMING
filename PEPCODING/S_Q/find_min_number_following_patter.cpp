
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

long long find_min_number_follwing_patter(string str)
{
    long long ans;
    stack<int> s;
    int number = 0;
    for (auto a : str)
    {
        if (a == 'd')
            s.push(++number);
        else
        {
            s.push(++number);
            ans += pow(10, s.size() - 1) * s.top();
            s.pop();
        }
    }
    return ans;
}

int main()
{
    cout << find_min_number_follwing_patter("ddiddi") << endl;
    return 0;
}
