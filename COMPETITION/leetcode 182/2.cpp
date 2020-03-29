#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> rating)
{
    int ans = 0;
    for (int i = 0; i < rating.size(); i++)
    {
        for (int j = i + 1; j < rating.size(); j++)
        {
            for (int k = j + 1; k < rating.size(); k++)
            {
                if (rating[i] < rating[j] < rating[k])
                    ans++;
                if (rating[i] > rating[j] > rating[k])
                    ans++;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> a({2, 5, 3, 4, 1});
    return 0;
}