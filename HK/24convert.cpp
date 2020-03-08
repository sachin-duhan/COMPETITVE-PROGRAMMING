#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s)
{
    int len = s.length();
    string a = s.substr(len - 2, 2);
    if (a[0] == 'P')
    {
        
    }
    else
        return s.substr(0, len - 2);
}

int main()
{
    string s;
    getline(cin, s);
    string result = timeConversion(s);
    cout << result << "\n";
    return 0;
}
