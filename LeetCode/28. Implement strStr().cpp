#include <iostream>
using namespace std;
int strStr(string s, string p)
{
    int lens = s.size(), lent = p.size();
    if (lent == 0)
        return 0;
    for (int i = 0; i <= lens - lent; ++i{
        for (int j = 0; j < lent; ++j)
        {
            if (s[i + j] != p[j])
                break;
            if (lent - 1 == j)
                return i;
        }
    return -1;
}
int main()
{
    string s = "HELLO", p = "LL";
    cout << strStr(s, p) << endl;
    return 0;
}