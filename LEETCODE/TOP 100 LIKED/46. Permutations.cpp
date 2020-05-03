#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> v;
    sort(nums.begin(), nums.end());
    do
    {
        v.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    return v;
}

int main()
{
    vector<int> input({1, 2, 3});
    return 0;
}