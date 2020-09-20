
#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int pos = -1;
    vector<int> data;

public:
    Stack()
    {
        data.resize(0);
    }

    void push(int val)
    {
        data.push_back(val);
        pos++;
    }

    int pop()
    {
        if (this->pos == -1)
        {
            cout << "stack underflow!" << endl;
            return -1;
        }
        return data[pos--];
    }

    int size() { return pos + 1; }

    bool empty() { return pos == -1; }

    void clear()
    {
        pos = -1;
        this->data.resize(0);
    }

    int top()
    {
        if (pos == -1)
        {
            cout << "stack underflow" << endl;
            return -1;
        }
        return data[pos];
    }

};