#include<vector>
#include<string>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        if (magazine.length() < ransomNote.length())
            return false;
        vector<int> chars(26, 0);
        for (char c : magazine)
            chars[c - 'a']++;
        for (auto c : ransomNote)
            if (chars[c - 'a'] <= 0)
                return false;
            else
                chars[c - 'a']--;
        return true;
    }
};