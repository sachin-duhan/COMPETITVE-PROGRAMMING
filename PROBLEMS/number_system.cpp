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

int convert_to_base10(int number, int base)
{
    if (base == 10)
        return number;
    string s = to_string(number);
    int n = s.length() - 1;
    int ans = 0;
    for (auto a : s)
        ans += (a - '0') * pow(base, n--);
    return ans;
}

string convert_base(int number, int a, int b)
{
    if (a == b || !number)
        return to_string(number);
    int base_10 = convert_to_base10(number, a);
    string ans = "";
    while (base_10)
    {
        ans += to_string(base_10 % b);
        base_10 /= b;
    }
    ans += '1';
    return ans;
}

int main()
{
    int n = 237283;
    cout << convert_base(n, 10, 5) << endl;
    return 0;
}