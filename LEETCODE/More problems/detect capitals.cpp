#include <bits/stdc++.h>
using namespace std;
class Solution {

    bool isCharCapital(char c) {
        return c-'a' < 97;
    }

public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        if (n < 2) return true;
        bool isLcapital = isCharCapital(word[n-1]), isFcapital = isCharCapital(word[0]);
        if (isLcapital && !isFcapital) return false;
        for (auto c: word) {
            if (isFcapital && isLcapital && !isCharCapital(c)) return false;
            if (!isFcapital && !isLcapital && isCharCapital(c)) return false;
            if (isFcapital && !isLcapital && isCharCapital(c)) return false;
        }
        return true;
    }
};

int main()
{
    Solution solve;
    cout << solve.detectCapitalUse("DuhaN") << endl;
    return 0;
}