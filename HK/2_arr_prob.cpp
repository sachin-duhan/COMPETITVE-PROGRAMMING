#include <bits/stdc++.h>
using namespace std;
#define loop(i, n) for (int i = 0; i < n; i++)
int input()
{
    int val;
    cin >> val;
    return val;
}

int n = 100000; // size of the vectors!
vector<int> v1, v2;

//case 1 of reverser array from i to j
void c1(vector<int> v, int start, int end)
{
    for (int i = 0; i < (end - start) / 2; i++)
        swap(v[start + i], v[end - i]);
}

//case 2 of swapping the i to j fragment with a to b
void c2(vector<int> v, int i, int j, int a, int b)
{
    for (int x = 0; x < (j - i); x++)
        swap(v[i + x], v[a + x]);
}

// swap the elements btwn 2 array from i to j
void c3(int start, int end)
{
    for (int i = 0; i < (end - start); i++)
        swap(v1[start + i], v2[start + i]);
}

void c4(int start, int end)
{
    float dia = 0.00;
    for (int i = 0; i < (end - start); i++)
    {
        for (int j = i + 1; j < start - end; j++)
        {
            float dist = abs((v1[start + i] * v1[start + j]) + (v2[start + i] * v2[start + j]));
            dia = max(dia, dist);
        }
    }
    printf("%.2f", dia);
    cout << endl;
}

int main()
{
    n = input();
    int m = input();
    // initialize the vector with n size and 0 values!!
    loop(i, n) { v1[i] = input(); }
    loop(i, n) { v2[i] = input(); }

    loop(i, m)
    {
        int a = input();
        if (a == 1)
        {
            int v = input(), i = input(), j = input();
            vector<int> arr = (v == 0) ? v1 : v2;
            c1(arr, i, j);
        }
        else if (a == 2)
        {
            int v = input(),
                i = input(), j = input(),
                a = input(), b = input();
            vector<int> arr = (v == 0) ? v1 : v2;
            c2(arr, i, j, a, b);
        }
        else if (a == 3)
        {
            int a = input(), b = input();
            c3(a, b);
        }
        else
        {
            int a = input(), b = input();
            c4(a, b);
        }
    }
    return 0;
}
