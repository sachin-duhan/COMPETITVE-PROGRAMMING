#include <bits/stdc++.h>
using namespace std;
map<string, bool> m;
void subsequence(string const str, const int index = 0, const string curr = "")
{
    if (m.find(curr) != m.end() && curr != "")
        return;
    if (index >= str.size())
        return;
    cout << curr << endl;
    m[curr] = true;
    subsequence(str, index + 1, curr);
    subsequence(str, index + 1, curr + str[index]);
}

int main()
{
    subsequence("sachin");
    return 0;
}
