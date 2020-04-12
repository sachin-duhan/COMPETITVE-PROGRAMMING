#include <bits/stdc++.h>
using namespace std;
vector<int> processQueries(vector<int> &queries, int m)
{
    vector<int> ans(queries.size());
    vector<bool> seen(m, false);
    for (int i = 0; i < queries.size(); i++)
    {
        if (i > 0 && queries[i - 1] == queries[i])
            ans[i] = 0;
        else
        {
            int saw = 0;
            int freq = count(queries.begin(), queries.end(), queries[i]);
            if (freq > 1)
            {
                int j = i;
                while (j >= 0)
                {
                    if (queries[j] == queries[i])
                        break;
                    else
                    {
                        j--;
                        saw++;
                    }
                }
                ans[i] = queries[i] - 1 + saw;
            }
            else
            {
                saw = 0;
                auto start = seen.begin() + queries[i] - 1;
                if (start < seen.end())
                    saw = count(start, seen.end(), true);
                ans[i] = queries[i] - 1 + saw;
                seen[queries[i] - 1] = true;
            }
        }
    }
    return ans;
}

int main()
{

    vector<int> input{7, 5, 5, 8, 3}, ans = processQueries(input, 8);
    for (auto val : ans)
        cout << val << " ";
    cout << endl;
    return 0;
}