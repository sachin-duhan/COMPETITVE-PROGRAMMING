#include <bits/stdc++.h>
using namespace std;
int heightChecker(vector<int> &h)
{
    vector<int> temp(h.begin(), h.end());
    sort(temp.begin(), temp.end());
    int ans = 0;
    for (int i = 0; i < h.size(); i++)
    {
        if (h[i] != temp[i])
            ans++;
    }
    return ans;
}
int main()
{
    vector<int> input{1, 2, 3, 2, 2};
    cout << heightChecker(input);
    return 0;
}