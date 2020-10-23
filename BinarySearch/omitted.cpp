
#include <bits/stdc++.h>
using namespace std;

void print(const vector<int> nums)
{
    for (auto a : nums)
        cout << a << " ";
    cout << endl;
}

vector<int> solve(vector<int> &nums)
{
    int n = nums.size();
    vector<int> pre(n, 1), post(n, 1);
    for (int i = 1; i < n; i++)
        pre[i] = nums[i - 1] * pre[i - 1];

    print(pre);

    for (int i = n - 2; i >= 0; i--)
        post[i] = nums[i + 1] * post[i + 1];

    print(post);

    vector<int> ans(n, 1);
    for (int i = 0; i < n; i++)
        ans[i] = pre[i] * post[i];

    return ans;
}

int main()
{
    vector<int> temp({1, 2, 3, 4, 5});
    auto ans = solve(temp);
    print(ans);
    return 0;
}
