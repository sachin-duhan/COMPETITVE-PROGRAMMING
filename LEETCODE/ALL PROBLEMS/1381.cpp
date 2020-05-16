#include <bits/stdc++.h>
using namespace std;

/* implementing a custom stack */

class CustomStack
{
public:
    int c = 0;
    list<int> l;
    CustomStack(int maxSize)
    {
        c = maxSize;
        l.clear();
    }

    void push(int x)
    {
        if (l.size() < c)
        {
            l.push_front(x);
        }
    }

    int pop()
    {
        if (!l.empty())
        {
            int x = l.front();
            l.pop_front();
            return x;
        }
        return -1;
    }

    void increment(int k, int val)
    {
        auto x = l.rbegin();
        while (x != l.rend() && k > 0)
        {
            *x += val;
            x++;
            k--;
        }
    }
};

int main()
{
    return 0;
}