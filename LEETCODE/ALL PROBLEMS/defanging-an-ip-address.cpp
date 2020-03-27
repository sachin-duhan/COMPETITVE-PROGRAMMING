#include <iostream>
using namespace std;

string defangIPaddr(string address)
{
    string ans = "";
    for (int i = 0; i < address.length(); i++)
    {
        if (address[i] == '.')
            ans += "[.]";
        else
            ans += address[i];
    }
    return ans;
}

int main()
{
    string s = "255.100.50.0";
    cout << defangIPaddr(s) << endl;
    return 0;
}