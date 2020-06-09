#include <iostream>
using namespace std;

string solve(int n)
{
    int temp = n, sum = 0;
    while (temp)
    {
        sum += temp % 10;
        temp /= 10;
    }
    string s = to_string(sum);
    int start = 0, end = s.length()-1;
    while (start <= end) 
        if (s[start++] != s[end--])
            return "No";
    return "Yes";
}

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
        t--;
    }
    return 0;
}