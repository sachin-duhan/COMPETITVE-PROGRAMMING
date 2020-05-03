#include <bits/stdc++.h>
using namespace std;

int strStr(string h, string n)
{
    for (int i = 0; i < h.length() - n.length(); i++)
    {
        int matchLen = 0;
        for (int j = 0; j < n.length(); j++)
        {
            if (h[i + j] == n[j])
                matchLen++;
            else
            {
                i += matchLen;
                break;
            }
        }
        if (matchLen == n.length())
            return i;
    }
    return -1;
}

int main()
{
    string s = "needle", h = "e1e";
    cout << strStr(s, h) << endl;
    return 0;
}