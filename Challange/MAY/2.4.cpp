#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dfs(vector<vector<int>> &image, int ci, int cj, int newVal, int matchVal)
    {
        // out of bound check!
        if (ci < 0 || cj < 0 || ci >= image.size() || cj >= image[0].size() || image[ci][cj] != matchVal)
            return;
        image[ci][cj] = newVal;
        dfs(image, ci + 1, cj, newVal, matchVal);
        dfs(image, ci - 1, cj, newVal, matchVal);
        dfs(image, ci, cj + 1, newVal, matchVal);
        dfs(image, ci, cj - 1, newVal, matchVal);
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        if (image[sr][sc] == newColor)
            return image;
        dfs(image, sr, sc, newColor, image[sr][sc]);
        return image;
    }
};