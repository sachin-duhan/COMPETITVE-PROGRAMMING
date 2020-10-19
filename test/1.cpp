/*
TIME COMPLEXITY OVERVIEW
time - O( N ) 
space - O ( 1 ) 
*/

#include <iostream>
using namespace std;

int find_max_palindromic_len(string s)
{
    int n = s.length();
    int l = 0, r = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            l++;
        else
            r++;

        if (l == r)
            ans = max(ans, 2 * r);

        else if (r > l)
            l = r = 0;
    }
    l = r = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '(')
            l++;
        else
            r++;
        if (l == r)
            ans = max(ans, 2 * l);
        else if (l > r)
            l = r = 0;
    }
    return ans;
}

int main()
{
    string input;
    cin >> input;
    cout << find_max_palindromic_len(input) << endl;
    return 0;
}