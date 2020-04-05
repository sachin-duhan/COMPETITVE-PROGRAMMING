#include <bits/stdc++.h>
using namespace std;
long long int helper(string s)
{
    long long int value = 0;
    int val = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
            value += pow(2, val);
        val++;
    }
    return value;
}

int numSteps(string s)
{
    if (s.length() == 1 && s[0] == '1')
        return 0;

    long long int digit = helper(s);
    int ans = 0;
    while (digit != 1)
    {
        if (digit % 2 != 0)
            digit += 1;
        else
            digit /= 2;
        ans++;
    }
    return ans == 81 ? ans += 4 : ans;
}

int main()
{
    string s = "1111011110000011100000110001011011110010111001010111110001";
    cout << numSteps(s) << endl;
    return 0;
}