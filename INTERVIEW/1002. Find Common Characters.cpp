#include<bits/stdc++.h>
using namespace std;

vector<string> commonChars(vector<string> &a)
{
    multiset r(begin(a[0]), end(a[0]));
    for (auto i(1); i < size(a); ++i)
    {
        multiset in(begin(a[i]), end(a[i]));
        multiset<char> t;
        set_intersection(begin(in), end(in), begin(r), end(r), inserter(t, begin(t)));
        r = t;
    }

    vector<string> out;
    for (const auto &c : r)
        out.emplace_back(string(1, c));
    return out;
}

int main()
{
    vector<string> strings({"bella", "label", "roller"});
    vector<string> output = commonChars(strings);
    for (int i = 0; i < output.size(); i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}