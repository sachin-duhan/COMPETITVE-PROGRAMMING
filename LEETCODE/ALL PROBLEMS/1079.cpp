#include <bits/stdc++.h>
using namespace std;

void util(string &s, string curr, unordered_set<string> &res)
{
    int l = curr.length();
    if (curr.length() > 0 && curr.length() <= s.size())
        res.insert(curr);
    for (int i = l; i < s.size(); i++)
    {
        curr += s[i];
        swap(s[i], s[l]);
        util(s, curr, res);
        swap(s[i], s[l]);
        curr.pop_back();
    }
}

void numTilePossibilitiesUtil(string &tiles, int l, string curr, unordered_set<string> &res)
{

    if (curr.length() > 0 && curr.length() <= tiles.size())
        res.insert(curr);

    for (int i = l; i < tiles.size(); i++)
    {
        curr += tiles[i];
        swap(tiles[i], tiles[l]);
        numTilePossibilitiesUtil(tiles, l + 1, curr, res);
        swap(tiles[i], tiles[l]);
        curr.pop_back();
    }
}

int numTilePossibilities(string tiles)
{

    // int n = tiles.length();
    string curr;
    unordered_set<string> res;
    sort(tiles.begin(), tiles.end());
    numTilePossibilitiesUtil(tiles, 0, curr, res);
    return res.size();
}

int solve(string s)
{
    string curr;
    unordered_set<string> res;
    sort(s.begin(), s.end());
    util(s, curr, res);
    return res.size();
}

int main()
{
    string s = "AAB";
    cout << solve(s) << endl;
    cout << numTilePossibilities(s) << endl;
    return 0;
}