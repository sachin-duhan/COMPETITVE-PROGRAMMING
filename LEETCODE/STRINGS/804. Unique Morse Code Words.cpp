#include <bits/stdc++.h>
using namespace std;
int uniqueMorseRepresentations(vector<string> &words, vector<string> codes)
{
    vector<string> coded_string;
    for (auto str : words)
    {
        string code = "";
        for (auto c : str)
            code += codes[int(c) - 97];
        coded_string.push_back(code);
    }
    for (auto str : coded_string)
        cout << str << " ";
    set<string> s(coded_string.begin(), coded_string.end());
    return s.size();
}

int main()
{
    vector<string> code{".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."},
        words{"gin", "zen", "gig", "msg"};
    char c = 'a';
    cout << uniqueMorseRepresentations(words, code) << endl;
    return 0;
}