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
                nums.push_back(c-48);
        // for(auto a : nums) cout << a << " ";
        // cout << endl;
        sort(nums.begin(), nums.end());
        string ans = "";
        for (auto a : nums)
            ans += a + "+";
        cout << ans << endl;
    } else cout << s << endl;
    return 0;
}