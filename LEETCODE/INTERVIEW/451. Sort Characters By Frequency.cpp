/*
Given a string, sort it in decreasing order based on the frequency of characters.

Example 1:

Input:
"tree"

Output:
"eert"

Explanation:
'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
Example 2:

Input:
"cccaaa"

Output:
"cccaaa"

Explanation:
Both 'c' and 'a' appear three times, so "aaaccc" is also a valid answer.
Note that "cacaca" is incorrect, as the same characters must be together.
Example 3:

Input:
"Aabb"

Output:
"bbAa"

Explanation:
"bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.
*/

#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s)
{
    map<char, int, greater<int>> m;
    for (int i = 0; i < s.length(); i++)
    {
        auto itr = m.find(s[i]);
        if (itr != m.end())
            itr->second++;
        else
            m.insert(make_pair(s[i], 1));
    }
    string output = "";
    for (auto itr = m.begin(); itr != m.end(); itr++)
        output += itr->first;
    return output;
}

int main()
{
    string input = "trererr";
    cout << frequencySort(input) << endl;
    return 0;
}