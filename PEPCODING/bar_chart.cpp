
#include <bits/stdc++.h>
using namespace std;

void bar_chart(vector<int> nums)
{
    int max_height = *max_element(nums.begin(), nums.end());
    vector<vector<int>> bar(max_height, vector<int>(nums.size(), 0));
    for (auto i = 0; i < nums.size(); ++i)
    {
        for (int j = 0; j < max_height; j++)
            bar[j][i] = max_height - j <= nums[i] ? 1 : 0;
    } 
    cout << endl;
    for (auto arr : bar)
    {
        for (auto val : arr)
            cout << (val == 0 ? " " : "*") << " ";
        cout << endl;
    }
}
int main()
{
    vector<int> nums = {3,1,2,5,0,2};
    bar_chart(nums);
    return 0;
}
