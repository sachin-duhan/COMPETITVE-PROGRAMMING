#include <bits/stdc++.h>
using namespace std;

void helper(vector<vector<int>> &ans, vector<int> &tmp, vector<int> &candidates, int target, int index)
{
    if (target <= 0)
    {
        if (target == 0)
            ans.push_back(tmp);
        return;
    }

    for (int i = 0; i < candidates.size(); i++)
    {
        tmp.push_back(candidates[i]);
        helper(ans,tmp,candidates,target-candidates[i],i);
        tmp.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> tmp(0);
    helper(ans, tmp, candidates, target, 0);
    return ans;
}

int main()
{
    vector<int> input({2, 3, 5});
    int target = 8;
    vector<vector<int>> ans = combinationSum(input,8);
    for(auto arr : ans){ for(auto el:arr) cout << el << " "; cout << endl;}
    return 0;
}