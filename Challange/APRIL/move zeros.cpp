#include <iostream>
#include <vector>
using namespace std;
void moveZeroes(vector<int> &nums)
{
    for (int lastNonZeroFoundAt = 0, cur = 0; cur < nums.size(); cur++)
        if (nums[cur] != 0)
            swap(nums[lastNonZeroFoundAt++], nums[cur]);
    
}

int main()
{
    vector<int> input({1, 3, 3, 3, 3, 2, 0, 0, 6, 1});
    moveZeroes(input);
    return 0;
}