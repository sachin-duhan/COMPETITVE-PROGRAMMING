#include <bits/stdc++.h>
using namespace std;

class conversion
{
    void stack_op(stack<string> &values, stack<char> &opr, bool is_postfix)
    {
        auto b = values.top();
        values.pop();
        auto a = values.top();
        values.pop();
        char op = opr.top();
        opr.pop();
        string temp = is_postfix ? a + b + op : op + a + b;
        values.push(temp);
    }

    int precedence(char c)
    {
        if (c == '*' || c == '/')
            return 2;
        else if (c == '+' || c == '-')
            return 1;
        return -1;
    }

public:
    string to_postfix(string eqn)
    {
        stack<string> post;
        stack<char> opr;
        for (auto a : eqn)
        {
            if (a == '(')
                opr.push(a);
            else if (a == '+' || a == '-' || a == '*' || a == '/')
            {
                while (precedence(a) >= precedence(opr.top()))
                    stack_op(post, opr, true);
                opr.pop();
            }
            else if (a == ')')
                while (opr.top() != '(')
                    stack_op(post, opr, true);
            else
                post.push(a + "");
        }
        return post.top();
    }

    string to_prefix(string eqn)
    {
        stack<string> pre;
        stack<char> opr;
        for (auto a : eqn)
        {
            if (a == '(')
                opr.push(a);
            else if (a == '+' || a == '-' || a == '*' || a == '/')
            {
                while (precedence(a) >= precedence(opr.top()))
                    stack_op(pre, opr, false);
                opr.pop();
            }
            else if (a == ')')
                while (opr.top() != '(')
                    stack_op(pre, opr, false);
            else
                pre.push(a + "");
        }
        return pre.top();
    }
};

int main()
{
    return 0;
}
