#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool validateBinaryTreeNodes(int n, vector<int> &leftChild, vector<int> &rightChild)
    {
        queue<int> q;
        unordered_set<int> s;
        if (leftChild.size() == 0)
            return true;

        for (int i = 0; i < leftChild.size(); i++)
        {
            if (leftChild[i] == -1 && rightChild[i] == -1)
                continue;
            if (leftChild[i] != -1)
            {
                s.insert(leftChild[i]);
                q.push(leftChild[i]);
            }
            if (rightChild[i] != -1)
            {
                s.insert(rightChild[i]);
                q.push(rightChild[i]);
            }
            break;
        }
        while (q.size() != 0)
        {
            int x = q.front();
            q.pop();
            if (s.count(leftChild[x]) || s.count(rightChild[x]))
                return false;
            if (leftChild[x] != -1)
            {
                s.insert(leftChild[x]);
                q.push(leftChild[x]);
            }
            if (rightChild[x] != -1)
            {
                s.insert(rightChild[x]);
                q.push(rightChild[x]);
            }
        }
        if (s.size() != n - 1) // for forest
            return false;
        return true;
    }
};

int main()
{
    Solution val;
    vector<int> l = {1, -1, 3, -1}, r = {2, -1, -1, -1};
    cout << val.validateBinaryTreeNodes(4, l, r) << endl;
    return 0;
}