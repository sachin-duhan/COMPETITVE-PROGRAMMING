#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    vector<Node *> neighbors;
    Node() : val(0), neighbors({}){};
    Node(int x) : val(x), neighbors({}){};
    Node(int x, vector<Node *> neighbors) : val(x), neighbors(neighbors){};
};

class Solution
{
private:
    unordered_map<int, Node *> visited;
public:
    Node *cloneGraph(Node *node)
    {
        if (!node)
            return node;
        if (visited[node->val])
            return visited[node->val];
        Node *tmp = new Node(node->val);
        visited[node->val] = tmp;
        for (int i = 0; i < node->neighbors.size(); ++i)
            tmp->neighbors.push_back(cloneGraph(node->neighbors[i]));
        return tmp;
    }
};