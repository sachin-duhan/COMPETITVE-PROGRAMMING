#include <bits/stdc++.h>
using namespace std;

vector<string> wordSubsets(vector<string> &A, vector<string> &B)
{
    auto ans = A;
    map<string, map<char, int>> counts;
    for (string s : ans)
    {
        map<char, int> m;
        for (char c : s)
            m[c]++;
        counts.insert(make_pair(s, m));
    }

    for (string letter : B)
        for (string word : ans)
        {
            auto check = counts.find(word)->second;
            for (char c : letter)
                if (check.find(c) == check.end() || --check[c] <= 0)
                {
                    auto itr = find(ans.begin(), ans.end(), word);
                    ans.erase(itr);
                }
        }

    return ans;
}

vector<int> freq(string s)
{
    vector<int> result(26, 0);
    for (char c : s)
        result[c - 'a']++;
    return result;
}

vector<string> solution2(vector<string> &A, vector<string> &B)
{
    vector<string> ans;
    vector<int> maxix(26, 0);
    for (string s : B)
    {
        vector<int> counts = freq(s);
        for (int i = 0; i < 26; i++)
            maxix[i] = max(maxix[i], counts[i]);
    }

    for (string word : A)
    {
        vector<int> letters = freq(word);
        bool flag = true;
        for (int i = 0; i < 26; i++)
            if (letters[i] > maxix[i])
                flag = false;
        if (flag)
            ans.push_back(word);
    }
    return ans;
}

int main()
{
    vector<string> A{"facebook", "google", "amazon"}, B{"lo", "eo"}, ans = wordSubsets(A, B);
    for (string s : ans)
        cout << s << endl;
    return 0;
}