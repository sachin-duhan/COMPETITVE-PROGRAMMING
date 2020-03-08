#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

Node *newNode(int val)
{
    Node *temp = new Node();
    temp->data = val;
    temp->right = temp->left = NULL;
    return temp;
}

Node *Insert(Node *root, int value)
{
    Node *temp = root;
    if (!temp) // tree is empty
        root = newNode(value);
    else if (temp->data < value)
        root->left = Insert(temp->left, value);
    else
        root->right = Insert(temp->right, value);
    return root;
}

int findMinimum(Node *root, int data, int min)
{
    Node *temp = root;
    if (!temp || temp->data < min)
        return min;
    else
        findMinimum(root->right, min);
}

Node *Delete(Node *root, int v)
{
    Node *temp = root;
    if (!temp)
        return root;
    else if (v < temp->data)
        temp->left = Delete(temp->left, v);
    else if (v >= temp->data)
        temp->right = Delete(temp->right, v);
    else
    {
        if (!temp->right && !temp->left)
        {
            delete temp;
            temp = NULL;
        }
        else if (!temp->left)
        {
            Node *r = temp;
            temp = temp->right;
            delete r;
        }
        else if (!temp->right)
        {
            Node *r = temp;
            temp = temp->left;
            delete r;
        }
        else
        {
            Node *min = findMinimum(root->right);
            temp->data = min->data;
            temp->right = Delete(temp->right, temp->data);
        }
        return temp;
    }
}

int main()
{
    int n;
    cin >> n;
    Node *root = NULL;
    while (n--)
    {
        int c;
        cin >> c;
        while (c--)
        {
            char i;
            cin >> i;
            if (i == 'i')
            {
                // insert the value!
                int value;
                cin >> value;
                root = Insert(root, value);
            }
            else
            {
            }
        }
    }
    return 0;
}
