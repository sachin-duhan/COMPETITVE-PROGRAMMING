
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
bool isValid(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == ')')
        {
            int count = 0;
            while (!st.empty())
            {
                char a = st.top();
                if (a == '(')
                {
                    st.pop();
                    break;
                }
                else
                    count++;
                st.pop();
            }
            if (count == 0)
                return false;
        }
        else
            st.push(c);
    }
    return true;
}

int main()
{
    cout << (isValid("((2+2)+(2+2))") ? "true " : "false") << endl;
    return 0;
}
