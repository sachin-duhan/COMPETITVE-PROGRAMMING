#include <iostream>
#include <vector>
#include <map>
using namespace std;

int majorityElement(vector<int> &nums)
{
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        auto itr = m.find(nums[i]);
        if (itr != m.end())
            itr->second++;
        else
            m.insert(make_pair(nums[i], 1));
    }
    int maxi = 0, val = 0;
    for (auto itr = m.begin(); itr != m.end(); itr++)
        if (itr->second > maxi)
        {
            maxi = itr->second;
            val = itr->first;
        }

    return val;
}

int main()
{
    vector<int> v({2, 2, 1, 1, 1, 2, 2});
    cout << majorityElement(v) << endl;
    return 0;
}