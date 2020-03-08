#include <bits/stdc++.h>
using namespace std;

int collect(vector<int> v, int start)
{
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[start % v.size()] <= i + 1)
        {
            count++;
        }
        start++;
    }
    return count;
}

int main()
{
    vector<int> question = {0, 1, 2, 3};
    vector<int> count_store(question.size(), 0);
    for (int i = 0; i < question.size(); i++)
    {
        count_store[i] = collect(question, i);
    }
    int max = INT_MIN;
    int index = -1;
    for (int i = 0; i < question.size(); i++)
    {
        if (max < count_store[i])
        {
            max = count_store[i];
            index = i;
        }
    }
    cout << index << endl;

    // multimap<int, int> s;
    // vector<int>::iterator it;
    // for (int i = 0; i < question.size(); i++)
    // {
    //     pair<int, int> p;
    //     p.first = i;
    //     p.second = question[i];
    //     s.insert(p);
    // }
    // multimap<int, int>::iterator s_i;
    // int min = INT_MIN;
    // for (s_i = s.begin(); s_i != s.end(); s_i++)
    // {

    // }

    return 0;
}