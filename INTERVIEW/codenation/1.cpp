#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'stringReduction' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. STRING s
 */

string stringReduction(int k, string s)
{
    int n = s.length();
    if (k == 0)
        return s;
    if (k >= n)
        return "";

    map<char, int> m;
    for (int i = 0; i < n; i++)
        m[s[i]] = i;
    auto itr = m.begin();
    while (k-- && itr != m.end())
    {
        if(itr->second == 0) itr++;
        s.erase(itr->second);
        itr->second--;    
    }
    return s;
}

int main()
{
    cout << stringReduction(2, "zyxedcba") << endl;
    return 0;
}