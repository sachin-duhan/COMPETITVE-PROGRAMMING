
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

int eval(int a, int b, char c)
{
    if (c == '+')
        return a + b;
    else if (c == '-')
        return a - b;
    else if (c == '*')
        return a * b;
    else if (c == '/')
        return a / b;
    else
        return 0;
}

int solve(string eqn)
{
    if (eqn.length() == 0)
        return 0;
    stack<int> values;
    stack<char> opr;

    for (size_t i = 0; i < eqn.length(); i++)
    {
        if (isdigit(eqn[i]))
            values.push(eqn[i] - '0');
        else if (eqn[i] == '/')
        {
            int b = values.top();
            values.pop();
            int a = values.top();
            values.pop();
            values.push(eval(a, b, '/'));
        }
        else if (eqn[i] == ')')
        {
            while (opr.top() != '(')
            {
                int b = values.top();
                values.pop();
                int a = values.top();
                values.pop();
                values.push(eval(a, b, opr.top()));
                opr.pop();
            }
            opr.pop();
        }
        else
            opr.push(eqn[i]);
    }
    
    while(!opr.empty()){
        int b = values.top();
        values.pop();
        int a = values.top();
        values.pop();
        values.push(eval(a, b, opr.top()));
        opr.pop();
    }

    return values.top();
}

int main()
{

    return 0;
}
