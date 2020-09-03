#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestDupSubstring(string S)
    {
        map<string, int> m;
        int _len = S.length();
        for (int i = 0; i < _len; i++)
        {
            string temp = "";
            for (int j = i; j < _len; j++)
            {
                temp += S[j];
                m[temp]++;
            }
        }

        string ans = "";
        for (auto itr : m)
        {
            // cout << itr.first << " -> " << itr.second << endl;
            if (itr.second > 1 && ans.length() < itr.first.length())
            {
                ans = itr.first;
            }
        }
        return ans;
    }
};

class Solution
{
public:
    int char_set = 123;
    //basically counting sort by first char
    void sortcharacter(string &S, vector<int> &order)
    {
        vector<int> count(char_set, 0);
        int n = S.length();
        for (int i = 0; i < n; i++)
            count[S[i]]++;

        for (int i = 1; i < char_set; ++i)
            count[i] = count[i] + count[i - 1];

        for (int i = n - 1; i >= 0; i--)
            order[--count[S[i]]] = i;
    }
    //similar elements goes to same class.
    void CalculateRank(string &S, vector<int> &order, vector<int> &rank)
    {
        rank[order[0]] = 0;
        for (int i = 1; i < order.size(); ++i)
        {
            if (S[order[i]] == S[order[i - 1]])
            {
                rank[order[i]] = rank[order[i - 1]];
            }
            else
            {
                rank[order[i]] = rank[order[i - 1]] + 1;
            }
        }
    }

    void sortcyclicshift(int L, vector<int> &order, vector<int> &rank, vector<int> &neworder)
    {
        int n = order.size();
        vector<int> count(n, 0);
        for (int i = 0; i < n; i++)
            count[rank[i]]++;

        for (int i = 1; i < n; ++i)
            count[i] = count[i] + count[i - 1];

        for (int i = n - 1; i >= 0; --i)
        {
            int start = (order[i] - L + n) % n;
            int cl = rank[start];
            neworder[--count[cl]] = start;
        }
    }
    void Updaterank(int L, vector<int> &neworder, vector<int> &newrank, vector<int> &rank)
    {
        int curleft, prevleft, curright, prevright;
        int n = neworder.size();
        newrank[neworder[0]] = 0;
        for (int i = 1; i < n; i++)
        {
            curleft = neworder[i];
            curright = (curleft + L) % n;
            prevleft = neworder[i - 1];
            prevright = (prevleft + L) % n;
            if (rank[curleft] == rank[prevleft] && rank[curright] == rank[prevright])
            {
                newrank[curleft] = newrank[prevleft];
            }
            else
            {
                newrank[curleft] = newrank[prevleft] + 1;
            }
        }
    }
    void BuildLCP(string &S, vector<int> &order, vector<int> &LCP)
    {
        int n = order.size();
        //calculate inverse of suffix array:
        vector<int> suffix_inverse(n, 0);
        for (int i = 0; i < n; ++i)
        {
            suffix_inverse[order[i]] = i;
        }
        int j = 0;
        int k = 0;
        for (int i = 0; i < n; ++i)
        {
            if (suffix_inverse[i] == n - 1)
            {
                k = 0;
                continue;
            }
            j = order[suffix_inverse[i] + 1];
            while (i + k < n && j + k < n && S[i + k] == S[j + k])
            {
                k++;
            }
            LCP[suffix_inverse[i]] = k;
            if (k)
                k--;
        }
    }
    string longestDupSubstring(string S)
    {
        S = S + "$";
        int n = S.length();
        vector<int> order(n, 0);
        vector<int> rank(n, 0);
        sortcharacter(S, order);
        CalculateRank(S, order, rank);
        vector<int> neworder(n, 0);
        vector<int> newrank(n, 0);
        int L = 1;
        while (L < n)
        {
            sortcyclicshift(L, order, rank, neworder);
            order = neworder;
            Updaterank(L, neworder, newrank, rank);
            rank = newrank;
            L = 2 * L;
        }
        vector<int> LCP(n - 1, 0);
        BuildLCP(S, order, LCP);
        pair<int, int> max = {0, 0};
        for (int i = 0; i < n - 1; ++i)
        {
            if (LCP[i] > max.first)
                max = {LCP[i], i};
        }

        if (max.first == 0)
            return "";
        return S.substr(order[max.second], max.first);
    }
};

int main()
{
    Solution solution;
    cout << solution.longestDupSubstring("banana") << endl;
    return 0;
}