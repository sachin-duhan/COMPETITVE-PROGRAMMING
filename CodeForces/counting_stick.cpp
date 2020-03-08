#include <iostream>
using namespace std;
int main()
{   
    string s;
    cin >> s;
    int plus = 0, eq = 0;
    int i = 0, a = 0, b = 0, c = 0;
    while (i < s.length())
    {
        if (s[i] == '|' && plus == 0)
            a++;
        else if (s[i] == '|' && plus > 0 && eq == 0)
            b++;
        else if (s[i] == '|' && plus > 0 && eq > 0)
            c++;
        else if (s[i] == '+')
            plus = i;
        else if (s[i] == '=')
            eq = i;
        i++;
    }
    if (a + b == c)
        cout << s << endl;
    else if (a + b == c - 2)
        cout << '|' << s.substr(0,s.length()-1);
    else    
        cout << "Impossible" << endl;
    return 0;
}
