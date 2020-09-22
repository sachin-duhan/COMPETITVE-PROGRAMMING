
#include <bits/stdc++.h>
using namespace std;

/*
TIME - O(N^2)
SPACE - O(1)
*/
vector<int> majorityElement(vector<int> nums)
{
    vector<int> ans;
    for (size_t i = 0; i < nums.size(); i++)
    {
        if(nums[i] == INT_MIN) continue;
        int count = 0, number = nums[i];
        for (size_t j = 0; j < nums.size(); j++)
        {
            if (nums[j] == number)
            {
                count++;
                nums[j] = INT_MIN;
            }
        }
        if (count > (nums.size() / 3) && number != INT_MIN)
            ans.push_back(number);
    }
    return ans;
}

vector<int> majorityElement2(vector<int> nums)
{
    sort(nums.begin(), nums.end()); // O(NlogN)
    vector<int> ans;
    int i;
    for(i =0; i < nums.size(); i++){
        int curr_number = nums[i];
        int j = i, frequency = 0;
        while(nums[j++] == curr_number) frequency++;
        if(frequency > (nums.size()/3)) ans.push_back(curr_number);
        i = j;
    }
    return ans;
}


int main()
{
    vector<int> val = {1, 1, 1, 2, 2, 3, 3, 3};
    auto tmp = majorityElement2(val);
    for(auto a : tmp) cout << a << " ";
    cout << endl;
    return 0;
}
