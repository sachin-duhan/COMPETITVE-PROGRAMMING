#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    map<int, int> m;
    for (int i = 0; i < nums1.size(); i++)
    {
        auto itr = m.find(nums1[i]);
        if (itr != m.end())
            itr->second++;
        else
            m.insert(make_pair(nums1[i], 1));
    }
    vector<int> intersection;
    for (int i = 0; i < nums2.size(); i++)
    {
        auto itr = m.find(nums2[i]);
        if (itr != m.end() && itr->second >= 1)
        {
            itr->second--;
            intersection.push_back(nums2[i]);
        }
    }
    return intersection;
}

int main()
{
    vector<int> v1({4, 9, 5}), v2({9, 4, 9, 8, 4}), output = intersect(v1, v2);
    for (int i = 0; i < output.size(); i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}