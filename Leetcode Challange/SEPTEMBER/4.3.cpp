
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        map<char, int> m;
        for (char c : s)
            m[c]++;
        for (auto a : t)
        {
            if (m.find(a) == m.end())
                return a;
            else
            {
                if (m[a] <= 0)
                    return a;
                m[a]--;
            }
        }
        return 'a';
    }
};

int main(){
    return 0;
}
