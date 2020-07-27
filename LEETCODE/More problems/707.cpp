#include <bits/stdc++.h>
using namespace std;

class MyLinkedList
{
public:
    list<int> nums;
    /** Initialize your data structure here. */
    MyLinkedList()
    {
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index)
    {
        auto itr = nums.begin();
        advance(itr,index);
        return *itr;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val)
    {
        nums.push_front(val);
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val)
    {
        nums.push_back(val);
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val)
    {
        auto itr = nums.begin();
        advance(itr, index);
        nums.insert(itr, val);
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index)
    {
        auto itr = nums.begin();
        advance(itr,index);
        nums.erase(itr);
    }
};
