#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &numbers, int target)
{
    for (int i = 0; i < numbers.size(); i++)
    {
        int v = target-numbers[i];
        int start = lower_bound(numbers.begin(),numbers.end(),v)-numbers.begin();
        if(start == i)start++; // to avoid same index!
        while (start<numbers.size() && numbers[start]<=v)
        {
            if (numbers[start] == v)
                return {i, start};
        }
        start++;
    }    
    return {-1,-1};
}

int main()
{
    vector<int> a{1, 2, 3, 4, 9, 16}, ans = twoSum(a, 5);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}