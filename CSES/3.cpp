/* ===================================================================
! REPITION PROBLEM on DNA
You are given a DNA sequence: a string consisting of characters 
A, C, G, and T.  Your task is to find the longest repetition in the 
sequence.  This is a maximum-length substring containing only one type
of character.

Input:
ATTCGGGA

Output:
3
======================================================================*/

#include <bits/stdc++.h>
using namespace std;
int find_max_len(string s)
{
    int ans = 0, i = 0, j = 0;
    while (j < s.length())
    {
        if (s[j] == s[i])
        {
            j++;
            ans = max(ans, j - i);
        }
        else
            i = j;
    }
    return ans;
}
int main()
{
    string s;
    cin >> s;
    cout << find_max_len(s) << endl;
    return 0;
}