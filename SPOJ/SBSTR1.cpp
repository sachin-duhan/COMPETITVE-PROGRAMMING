// KPM ALGORITHM QUESTION!
#include <bits/stdc++.h>
using namespace std;

bool solve(string s, string t){

    vector<int> back(t.length(), 0);
    int i = 0, j = 0;
    while (j < s.length())
    {
        if (t[i] == t[j])
        {
            back[j] = i + 1;
            i++;
            j++;
        }
        else
            j++;
    }

    for(i = 0; i < s.length(); i++)
    {
        while (s[i++] == t[j++])continue;
        if (j == i + t.length() - 1)
            return true;
        else
            j = back[j];
    }
    return false;
}

int main()
{
    string s = "1010110010", t = "10110";
    cout << solve(s, t) << endl;
    return 0;
}