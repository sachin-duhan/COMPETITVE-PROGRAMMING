#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    string s;
    cin >> s;
    int j = 0;
    string test = "hello";
    int s_i = 0, t_i = 0;
    while (s_i < s.length() && t_i < test.length())
        if(s[s_i++] == test[t_i])t_i++;
    
    if(t_i == test.length()) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}