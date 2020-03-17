#include<stack>
using namespace std;

class MinStack
{

    // The basic idea is to have another data structure to maintain the minimum value of each node in the stack
    // The first element of the data structure should record the current minimum value
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
