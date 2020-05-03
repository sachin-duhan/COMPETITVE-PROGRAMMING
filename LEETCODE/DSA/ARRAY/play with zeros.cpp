#include<vector>
using namespace std;
class Solution
{
public:
    void duplicateZeros(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0)
            {
                int j = arr.size() - 1;
                while (j > i)
                {
                    arr[j] = arr[j - 1];
                    j--;
                }
                i++;
            }
        }
    }
};