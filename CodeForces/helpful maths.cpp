#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.length() > 1)
    {
        vector<int> nums;
        for (char c : s)
            if (c != '+')
                nums.push_back(int(c) - 48);
        sort(nums.begin(), nums.end());
        string ans = "";
        for (int i = 0; i < nums.size(); i++)
        {
            ans += to_string(nums[i]);
            if (i < nums.size() - 1)
                ans += "+";
        }
        cout << ans << endl;
    }
    else
        cout << s << endl;
    return 0;
}