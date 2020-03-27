#include <vector>
#include <iostream>
#include <map>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        auto itr = m.find(nums[i]);
        if (itr == m.end())
            m.insert(make_pair(nums[i], 1));
    }
    int i = 0;
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        nums[i] = itr->first;
        i++;
    }
    return i;
}

int betterSolution(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main()
{
    vector<int> arr({0, 0, 1, 1, 1, 2, 2, 3, 3, 4});
    int n = betterSolution(arr);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}