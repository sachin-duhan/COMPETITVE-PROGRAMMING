#include <bits/stdc++.h>
using namespace std;

string freqAlphabets(string s)
{
    string result = "";
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '#')
        {
            int k = s[i - 1] - '0';
            k += (s[i - 2] - '0') * 10 - 1;
            result.push_back('a' + k);
            i = i - 2;
        }
        else
        {
            int c = s[i] - '0' - 1;
            char k = c + 'a';
            result.push_back(k);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string s = "12345678910#11#12#13#14#15#16#17#18#19#20#21#22#23#24#25#26#";
    cout << freqAlphabets(s) << endl;
    return 0;
}