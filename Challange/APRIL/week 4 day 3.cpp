#include <bits/stdc++.h>
using namespace std;

class LRUCache
{
private:
int size;
unordered_map<int,int>m;
list<int> l;
public:
    LRUCache(int capacity)
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        size = capacity;
    }

    int get(int key){
        if(m.find(key)==m.end()) -1;
        else {
            l.remove(key);
            l.push_back(key);
            return m[key];
        }
    }

    void put(int key, int value){
        if(m.find(key)!= m.end()){
            m.erase(key);
            l.remove(key);
        }
        if(l.size() >= size){
            m.erase(l.front());
            l.pop_front();
        }
        m[key]=value;
        l.push_back(key);
    }
};
