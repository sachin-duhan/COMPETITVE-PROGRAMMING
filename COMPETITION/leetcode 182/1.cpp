#include <map>
#include <vector>
using namespace std;

int findLucky(vector<int> &arr)
{
    map<int, int> m;
    if (arr.size() == 0)
        return -1;
    for (auto val : arr)
        m[val]++;
    int ans = -1;
    for (auto itr = m.begin(); itr != m.end(); itr++)
        if (itr->first == itr->second)
            ans = max(ans, itr->first);
    return ans;
}
