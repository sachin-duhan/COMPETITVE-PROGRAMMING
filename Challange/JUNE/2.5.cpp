#include <bits/stdc++.h>
using namespace std;

class RandomizedSet {
    unordered_set<int> _elems;
public:
    RandomizedSet() {}
    bool insert(int val) {
        return (_elems.insert(val)).second;   
    }
    bool remove(int val) {
        return _elems.erase(val);
    }
    int getRandom() {
        return *next(_elems.begin(), rand() % _elems.size());
    }
};