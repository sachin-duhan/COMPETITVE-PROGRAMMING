#include <bits/stdc++.h>
using namespace std;
int solve(string start, string end, vector<string> dict)
{
    set<string> words(dict.begin(), dict.end());
    if (words.find(end) == words.end())
        return 0;
    queue<string> q;
    q.push(start);
    int ans = 0;

    while (!q.empty())
    {
        string temp = q.front();
        if (temp == end)
            break;
        q.pop();
        words.erase(temp);
        for (int i = 0; i < temp.size(); i++)
        {
            for (char c = 'a'; c <= 'z'; c++)
            {
                temp[i] = c;
                if (words.find(temp) != words.end())
                {
                    ans++;
                    q.push(temp);
                }
            }
        }
    }
    return ans;
}

// bidirectional DFS!!
int ladderLength2(string beginWord, string endWord, vector<string> &wordList)
{
    unordered_set<string> dict(wordList.begin(), wordList.end());
    if (!dict.count(endWord))
        return 0;

    // bidirectional BFS
    unordered_set<string> q1{beginWord};
    unordered_set<string> q2{endWord};
    int step = 0;

    while (!q1.empty() && !q2.empty())
    {
        ++step;
        // since we also expand q1, so we might wanna swap the shorter one to q1
        if (q1.size() > q2.size())
            swap(q1, q2);

        unordered_set<string> q;
        for (auto word : q1)
        {
            int len_w = word.size();
            for (int i = 0; i < len_w; ++i)
            {
                auto ch = word[i];
                for (int j = 'a'; j <= 'z'; ++j)
                {
                    word[i] = j;
                    // check if in q2
                    if (q2.count(word))
                        return step + 1;
                    // check if valid word
                    if (!dict.count(word))
                        continue;
                    dict.erase(word);
                    q.insert(word);
                }
                word[i] = ch;
            }
        }

        swap(q, q1);
    }
    return 0;
}

int main()
{
    vector<string> dict{"hot", "dot", "dog", "lot", "log", "cog"};
    cout << solve("hit", "cog", dict) << endl;
    return 0;
}