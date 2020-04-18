#include<vector>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution
{
public:
    int maxDepth(Node *root)
    {
        if (!root)
            return 0;
        int val = 0;
        for (auto a : root->children)
            val = max(val, maxDepth(a));
        return val + 1;
    }
};