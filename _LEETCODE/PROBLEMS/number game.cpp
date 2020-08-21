// wrong answer!!

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int num(char c) { return c - '0'; }

public:
    vector<int> numsSameConsecDiff(int N, int K)
    {
        if (N == 1)
            return {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        string start = "1";
        map<string, int> ans;
        while (num(start[0]) < 9)
        {
            string temp = start;
            int index = 0;
            while (temp.length() < K)
            {
                int val = num(start[index]);
                if ((val + K < 10 || val - K > 0) && ans.find(temp) == ans.end())
                {
                    int pos = val + K, neg = val - K;
                    temp += pos > 10 ? to_string(neg) : to_string(pos);
                    cout << temp << endl;
                    if (temp.length() == K)
                    {
                        ans.insert({temp, 1});
                        start = to_string(num(start[0]) + 1);
                        break;
                    }
                    index++;
                }
            }
        }
        vector<int> solution;
        for (auto itr : ans)
            solution.push_back(stoi(itr.first));
        return solution;
    }
};

int main()
{
    Solution solve;
    auto nums = solve.numsSameConsecDiff(3, 4);
    for (auto n : nums)
        cout << n << " ";
    cout << endl;
    return 0;
}