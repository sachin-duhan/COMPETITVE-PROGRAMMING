
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
bool match(char c, char b)
{
    if (c == '(' && b == ')')
        return true;
    else if (c == '[' && b == ']')
        return true;
    else if (c == '{' && b == '}')
        return true;
    else
        return false;
}

bool isBalanced(string const str)
{
    stack<char> s;
    for (auto c : str)
    {
        if (c == '(' || c == '{' || c == '[')
            s.push(c);
        else if (c == ')' || c == ']' || c == '}')
        {
            if (s.empty())
                return false;
            char d = s.top();
            if (!match(d,c))
                return false;
            s.pop();
        }
    }
    return s.size() == 0;
}
int main()
{
    cout << (isBalanced("()()(){}{}[][()]") ? "true" : "false") << endl;
    return 0;
}
