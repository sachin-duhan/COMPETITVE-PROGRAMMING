#include <bits/stdc++.h>
using namespace std;

long repeatedString(string s, long a)
{
    long count = 0;
    long l = s.size();
    long len = min(l, a);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a')
            count++;
    }
    int remaining = a % l;
    count *= a / l;
    for (int i = 0; i < remaining; i++)
    {
        if (s[i] == 'a')
            count++;
    }
    return count;
}
int main()
{
    string str = "aab";
    long count = 882787;
    cout << repeatedString(str, count) << endl;
    return 0;
}