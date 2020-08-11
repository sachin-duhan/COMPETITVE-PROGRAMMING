#include <bits/stdc++.h>
using namespace std;

bool canReach(vector<int> &nums, int start) {
    if (nums[start] == 0) return true;
    if (start < 0 || start >= nums.size() || nums[start] < 0) return false;
    nums[start] *= -1;
    return canReach(nums, start - nums[start]) || canReach(nums, start+nums[start]);
}

int main() {

}