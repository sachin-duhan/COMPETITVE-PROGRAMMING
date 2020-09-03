#include <iostream>
#include <stack>
using namespace std;

bool backspaceCompare(string S, string T)
{
    stack<char> s, t;
    for (char c : S){ 
        if (c != '#') s.push(c);
        else if (!s.empty()) s.pop();
    }

    for (char c : T) {
        if (c != '#') t.push(c);
        else if (!t.empty()) t.pop();
    }

    if (s.size() != t.size()) return false;

    while (!s.empty() && !t.empty())
    {
        if (s.top() != t.top())
            return false;
        s.pop();
        t.pop();
    }

    return true;
}

int main()
{
    string s = "ab#c", t = "a#bc";
    cout << backspaceCompare(s, t) << endl;
    return 0;
}