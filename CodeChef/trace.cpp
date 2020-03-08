#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int N;
        cin >> N;
        vector<vector<int>> V(N, vector<int>(N, 0));
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                int x;
                cin >> x;
                V[i][j] = x;
            }
        }
        int Max = 0;
        for (int i = N - 1; i >= 0; i--)
        {
            int sum = 0;
            for (int j = 0; j < N - i; j++)
            {
                sum = sum + V[i + j][j];
            }
            Max = max(Max, sum);
        }
        for (int j = N - 1; j > 0; j--)
        {
            int sum = 0;
            for (int i = 0; i < N - j; i++)
            {
                sum = sum + V[i][i + j];
            }
            Max = max(Max, sum);
        }
        cout << Max << endl;
    }
}
