#include <bits/stdc++.h>
using namespace std;

class ProductOfNumbers
{
    vector<size_t> prod;
    vector<int> nums;

public:
    ProductOfNumbers() {}

    void add(int num)
    {
        nums.push_back(num);
        int last = prod.size();
        if (!last)
            prod.push_back(num);
        else
            prod.push_back(prod[last - 1] * num);
    }

    int getProduct(int k)
    {
        if (prod.size() <= k)
            return -1;
        return
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
