
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string decodeAtIndex(string S, int K)
    {
        long long size = 0;
        int N = S.size();

        for (int i = 0; i < N; i++)
        {
            if (isdigit(S[i]))
                size *= S[i] - '0';
            else
                size++;
        }

        for (int i = N - 1; i >= 0; i--)
        {
            K %= size;
            if (K == 0 && isalpha(S[i]))
                return (string) "" + S[i];

            if (isdigit(S[i]))
                size /= S[i] - '0';
            else
                size--;
        }
        return "";
    }
};

int main()
{
    Solution solve;
    cout << solve.decodeAtIndex("sachin2duhan3", 18) << endl;
    return 0;
}
