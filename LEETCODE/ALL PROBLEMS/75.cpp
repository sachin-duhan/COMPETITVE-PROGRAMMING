#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        map<int, int> m;
        for (int a : nums)
            m[a]++;
        nums.clear();
        for (auto item : m)
        {
            int k = item.second;
            while (k--)
                nums.push_back(item.first);
        }
    }
};

int main()
{
    Solution solve;
    vector<int> input{0, 2, 1, 1, 1, 2, 2, 2, 0, 0, 0};
    solve.sortColors(input);
    for (int a : input)
        cout << a << " ";
    cout << endl;
    return 0;
}