#include <bits/stdc++.h>
using namespace std;

vector<int> deckRevealedIncreasing(vector<int> &deck)
{
    int n = deck.size();
    vector<int> ans(n);
    sort(deck.begin(), deck.end());
    queue<int> q;
    for (int i = 0; i < n; i++)
        q.push(i);
    int i = 0;
    while (!q.empty())
    {
        ans[q.front()] = deck[i++];
        q.pop();
        int t = q.front();
        q.push(t);
        q.pop();
    }
    return ans;
}

int main()
{

    return 0;
}