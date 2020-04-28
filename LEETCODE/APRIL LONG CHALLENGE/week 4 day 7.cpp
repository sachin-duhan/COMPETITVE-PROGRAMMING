#include <bits/stdc++.h>
using namespace std;

class FirstUnique
{
    list<int> uniq;
    map<int, int> m;

public:
    FirstUnique(vector<int> &nums)
    {
        for (auto a : nums)
            add(a);
    }

    int showFirstUnique()
    {
        if (uniq.empty())
            return -1;
        int val = *uniq.begin();
        uniq.pop_front();
        return val;
    }

    void add(int value)
    {
        if (m.find(value) != m.end())
        {
            auto itr = lower_bound(uniq.begin(), uniq.end(), value);
            while (*itr != value)
                itr++;
            uniq.erase(itr);
        }
        else
        {
            uniq.push_back(value);
        }
        m[value]++;
    }
};

int main()
{
    vector<int> input{2, 3, 3, 4, 5, 5};
    FirstUnique *obj = new FirstUnique(input);
    cout << obj->showFirstUnique() << endl;
    cout << obj->showFirstUnique() << endl;
    cout << obj->showFirstUnique() << endl;
    return 0;
}