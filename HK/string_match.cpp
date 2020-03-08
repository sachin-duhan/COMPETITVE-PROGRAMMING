#include <bits/stdc++.h>
using namespace std;
vector<int> matchingStrings(vector<string> strings, vector<string> queries)
{
    vector<int> result(queries.size(), 0);
    for (int i = 0; i < strings.size(); ++i)
    {
        for (int j = 0; j < queries.size(); j++)
        {
            if (queries[j] == strings[i])
                result[j]++;
        }
    }
    return result;
}

int main()
{
    vector<string> strings = {"aba", "baba", "aba", "xzxb"};
    vector<string> queries = {"aba", "baba", "cd"};
    vector<int> result = matchingStrings(strings, queries);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}