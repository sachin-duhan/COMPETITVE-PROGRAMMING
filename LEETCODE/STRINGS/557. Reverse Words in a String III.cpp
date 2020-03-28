#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    string ans;
    vector<string> cont;
    cont.push_back("");
    int index = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            index++;
            cont.push_back("");
        }
        else
            cont[index].push_back(s[i]);
    }
    for (auto str : cont)
    {
        int i=0,j=str.length()-1;
        while (i<j)
            swap(str[i++],str[j--]);
        str+=" ";
        ans+= str;        
    }
    return ans;
}

int main()
{
    string s = "Let's take LeetCode contest";
    cout << reverseWords(s) << endl;
    return 0;
}