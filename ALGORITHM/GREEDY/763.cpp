#include <bits/stdc++.h>
using namespace std;
vector<int> partitionLabels(string S)
{
    map<char, pair<int, int>> m;
    for (int i = 0; i < S.length(); i++)
    {
        auto itr = m.find(S[i]);
        if (itr != m.end())
            m[S[i]].second = i;
        else
            m.insert(make_pair(S[i], make_pair(i, i)));
    }
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        
    }
    return {0};
}

int main()
{
    string s = "ababcbacadefegdehijhklij";
    partitionLabels(s);
    return 0;
}