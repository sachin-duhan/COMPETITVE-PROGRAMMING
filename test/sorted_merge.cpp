
#include <bits/stdc++.h>
using namespace std;

vector<int> sorted_merge(vector<int> a, vector<int> b)
{
    int i = 0, j = 0;
    vector<int> ans;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
            ans.push_back(a[i++]);
        else
            ans.push_back(b[j++]);
    }
    while (i < a.size())
    {
        ans.push_back(a[i++]);
    }
    while (j < b.size())
    {
        ans.push_back(b[j++]);
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> nums1(n, 0), nums2(m, 0);
    for (int i = 0; i < n; i++)
        cin >> nums1[i];

    for (int i = 0; i < m; i++)
        cin >> nums2[i];

    auto sorted_arr = sorted_merge(nums1, nums2);
    for (auto a : sorted_arr)
        cout << a << " ";
    cout << endl;
    return 0;
}
