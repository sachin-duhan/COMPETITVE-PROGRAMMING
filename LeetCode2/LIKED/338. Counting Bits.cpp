#include <bits/stdc++.h>
using namespace std;

int helper(int n)
{
    int ans = 0;
    while (n)
    {
        if ((n % 2) == 1)
            ans++;
        n /= 2;
    }
    return ans;
}

vector<int> countBits(int n)
{
    vector<int> ans({0, 1, 1, 2, 1, 2});
    if (n < 6)
    {
        ans.resize(n + 1);
        return ans;
    }
    for (int i = 6; i < n; i++)
        ans.push_back(helper(i));
    return ans;
}

vector<int> dpSolution(int n) // better solution!
{
    vector<int> ans(n + 1);
    ans[0] = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            ans[i] = ans[i / 2];
        else
            ans[i] = ans[i / 2] + 1;
    }
    return ans;
}
int main()
{
    int n = 10;
    vector<int> output = countBits(n);
    for (int i = 0; i < output.size(); i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}