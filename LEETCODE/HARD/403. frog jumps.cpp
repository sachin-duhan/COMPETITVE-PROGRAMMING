#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    Solution()
    {
        ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
    }

    bool canCross(vector<int> &stones)
    {
        int N = stones.size();
        vector<vector<int>> dp(N, vector<int>(N + 1));
        dp[0][1] = true;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                int diff = stones[i] - stones[j];
                if (diff < 0 || diff > N || !dp[j][diff])
                    continue;
                dp[i][diff] = true;
                if (diff - 1 >= 0)
                    dp[i][diff - 1] = true;
                if (diff + 1 <= N)
                    dp[i][diff + 1] = true;
                if (i == N - 1)
                    return true;
            }
        }
        return false;
    }
};

int main()
{
    vector<int> input{0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 12};
    Solution question;
    cout << question.canCross(input) << endl;
    return 0;
}

/*JAVA SOLUTION FOR THE SAME!*/

// class Solution {
//     public boolean canCross(int[] stones) {
//         int N = stones.length;
//         boolean[][] dp = new boolean[N][N + 1];
//         dp[0][1] = true;

//         for(int i = 1; i < N; ++i){
//             for(int j = 0; j < i; ++j){
//                 int diff = stones[i] - stones[j];
//                 if(diff < 0 || diff > N || !dp[j][diff]) continue;
//                 dp[i][diff] = true;
//                 if(diff - 1 >= 0) dp[i][diff - 1] = true;
//                 if(diff + 1 <= N) dp[i][diff + 1] = true;
//                 if(i == N - 1) return true;
//             }
//         }

//         return false;
//     }
// }