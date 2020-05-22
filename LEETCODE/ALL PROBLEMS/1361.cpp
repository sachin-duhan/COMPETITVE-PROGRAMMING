#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool isError = false;

    void dfs(int index, vector<int> r, vector<int> l, vector<bool> vis)
    {
        if (isError || index > r.size())
            return;
        if ((r[index] == -1 && l[index] == -1 && index < r.size() - 1) || vis[index])
        {
            isError = true;
            return;
        }
        vis[index] = true;
        dfs(r[index], r, l, vis);
        dfs(l[index], r, l, vis);
    }

public:
    bool validateBinaryTreeNodes(int n, vector<int> &leftChild, vector<int> &rightChild)
    {
        vector<bool> isVisited(n, false);
        dfs(0, rightChild, leftChild, isVisited);
        return !isError;
    }
};
int main()
{
    Solution val;
    vector<int> l = {1, -1, 3, -1}, r = {2, -1, -1, -1};
    cout << val.validateBinaryTreeNodes(4, l, r) << endl;
    return 0;
}