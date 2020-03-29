#include <iostream>
using namespace std;
void solve(string input, string output)
{
    if (!input.length())
    {
        cout << output << endl;
        return;
    }
    solve(input.substr(1), output);
    solve(input.substr(1), output + input[0]);
}
int main()
{
    string s = "abc";
    solve(s, "");
    return 0;
}