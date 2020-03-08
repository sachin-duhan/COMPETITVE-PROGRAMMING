#include <cstdio>
#include <cstdlib>
#include <stack>
#include <vector>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); i++)

int ri()
{
    int x;
    scanf("%d", &x);
    return x;
}

const int N = 100000;
struct Node
{
    int val, size, pri;
    Node *l, *r;
    void mconcat()
    {
        int size(Node * x);
        this->size = size(l) + 1 + size(r);
    }
} node[N];

int size(Node *x)
{
    return x ? x->size : 0;
}

Node *join(Node *x, Node *y)
{
    if (!x)
        return y;
    if (!y)
        return x;
    if (x->pri < y->pri)
    {
        x->r = join(x->r, y);
        x->mconcat();
        return x;
    }
    else
    {
        y->l = join(x, y->l);
        y->mconcat();
        return y;
    }
}

void split(Node *x, int k, Node *&l, Node *&r)
{
    if (!x)
        l = r = NULL;
    else
    {
        int c = size(x->l) + 1;
        if (k < c)
        {
            split(x->l, k, l, x->l);
            r = x;
        }
        else
        {
            split(x->r, k - c, x->r, r);
            l = x;
        }
        x->mconcat();
    }
}

Node *extract(Node *&x, int from, int to)
{
    Node *l, *m, *r;
    split(x, to, m, r);
    split(m, from, l, m);
    x = join(l, r);
    return m;
}

void inorder(Node *x)
{
    vector<int> a;
    stack<Node *> s;
    for (;;)
    {
        for (; x; x = x->l)
            s.push(x);
        if (s.empty())
            break;
        x = s.top();
        s.pop();
        a.push_back(x->val);
        x = x->r;
    }
    printf("%d\n", abs(a[0] - a.back()));
    for (int x : a)
        printf("%d ", x);
    puts("");
}

int main()
{
    int n = ri(), m = ri();
    Node *rt = NULL;
    REP(i, n)
    {
        node[i].val = ri();
        node[i].pri = rand();
        node[i].size = 1;
        rt = join(rt, node + i);
    }
    while (m--)
    {
        int op = ri(), l = ri() - 1, r = ri();
        Node *sub = extract(rt, l, r);
        rt = op == 1 ? join(sub, rt) : join(rt, sub);
    }
    inorder(rt);
}