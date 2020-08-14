#include <bits/stdc++.h>
using namespace std;

vector<int> input(int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        ans.push_back(temp);
    }
    return ans;
}

int solve(vector<int> nums1, vector<int> nums2, int k)
{
    int len1 = nums1.size(), n = nums2.size();
    if (len1 == 0 || n == 0)
        return -1;
    map<int, int> m;
    for (auto a : nums2)
        m[a]++;
    auto temp = m;
    int el_found = 0, ans = INT_MAX;
    for (int i = 0; i < len1; i++)
    {
        int j = i;
        el_found = 0;
        while (el_found <= k && j < len1)
        {
            int val = nums1[j];
            if (temp.find(val) != temp.end())
            {
                el_found++;
                temp.erase(val);
            }
            j++;
        }
        ans = min(ans, j - i);
        temp = m;
    }
    return ans < k ? -1 : ans;
}

int main()
{
    int n = 0, m = 0, k = 0;
    cin >> n >> m >> k;
    auto A = input(n), B = input(m);
    cout << solve(A, B, k) << endl;
    return 0;
}