#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node *back;
    Node() : val(-1), next(NULL){};
    Node(int val) : val(val), next(NULL), back(NULL){};
};

class Queue
{
private:
    int _size = 0;
    Node *head = new Node(), *end = head;

public:
    int size() { return this->_size; }
    int front()
    {
        if (!this->head)
            return -1;
        return this->head->val;
    }

    int push(int val)
    {
        Node *temp = new Node(val);
        this->end->next = temp;
        temp->back = this->end;
        this->end = this->end->next;
        this->_size++;
    }

    int pop_front()
    { 
        if(!this->head) return -1;
        int val = this->head->val;
        this->head = this->head->next;
        this->_size--;
        return val;
    }

    int pop()
    {
        if(!this->end) return -1;
        int val = this->end->val;
        this->end = this->end->back;
        this->_size--;
        return val;
    }

    void clear()
    {
        Node *temp = head;
        while (temp)
        {
            temp = temp->next;
            free(temp);
        }
        this->_size = 0;
        free(this->end);
    }

    void push_front(int val)
    {
        Node *temp = new Node(val);
        this->head->back = temp;
        this->head = temp;
        this->_size++;
    }
};