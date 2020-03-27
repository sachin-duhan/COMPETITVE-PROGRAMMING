#include <iostream>
using namespace std;
int solve(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c == 'I')
            ans += 1;
        else if (c == 'V')
            ans += 5;
        else if (c == 'X')
            ans += 10;
        else if (c == 'L')
            ans += 50;
        else if (c == 'C')
            ans += 100;
        else if (c == 'D')
            ans += 500;
        else if (c == 'M')
            ans += 1000;
    }
    return ans;
}

int main()
{
    string roman = 'MCMXCIV';
    cout << solve(roman);
    return 0;
}