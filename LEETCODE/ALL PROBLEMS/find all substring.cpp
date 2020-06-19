#include <bits/stdc++.h>
using namespace std;

vector<string> sub_strings(string str)
{
    vector<string> result;
    int _len = str.length();
    for (int i = 0; i < _len; i++)
    {
        string s = "";
        for (int j = i; j < _len; j++)
        {
            s += str[j];
            result.push_back(s);
        }
    }
    return result;
}

int main()
{
    string s = "hello";
    vector<string> answer = sub_strings(s);
    for (string s : answer)
        cout << s << endl;
    return 0;
}