#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v[(i + k) % n] = nums[i];
    for (int i = 0; i < n; i++)
        nums[i] = v[i];
}

int main()
{
    vector<int> v({1, 2, 3, 4, 5, 6, 7});
    rotate(v, 3);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}