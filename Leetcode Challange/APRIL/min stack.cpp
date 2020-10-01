#include<stack>
using namespace std;

class MinStack
{
public:
    stack<int> minStack;
    stack<int> regularStack;

    /** initialize your data structure here. */
    MinStack()
    {
    }

    void push(int x)
    {
        regularStack.push(x);

        if (minStack.empty())
        {
            minStack.push(x);
            return;
        }

        int top = minStack.top();
        // top of the minStack should record the current minimum value
        if (x < top)
        {
            minStack.push(x);
        }
        else
        {
            minStack.push(top);
        }
    }

    void pop()
    {
        regularStack.pop();
        minStack.pop();
    }

    int top()
    {
        return regularStack.top();
    }

    int getMin()
    {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */