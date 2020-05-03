#include<map>
class Solution
{
public:
    int numJewelsInStones(std::string J,std::string S)
    {
        std::map<char, int> m;
        for (char c : J)
            m[c]++;
        int ans = 0;
        for (char c : S)
            if (m.find(c) != m.end())
                ans++;
        return ans; 
    }
};