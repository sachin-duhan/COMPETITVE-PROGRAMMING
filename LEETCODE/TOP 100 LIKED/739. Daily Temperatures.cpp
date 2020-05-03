#include <vector>
#include <iostream>
#include <stack>
using namespace std;

vector<int> dailyTemperatures(vector<int> &T)
{
    stack<int> s;
    vector<int> res(T.size(), 0);
    for (int i = 0; i < T.size(); i++)
    {

        while (!s.empty() && T[i] > T[s.top()])
        {
            res[s.top()] = i - s.top();
            s.pop();
        }
        s.push(i);
    }
    return res;
}

int main()
{
    vector<int> arr({73, 74, 75, 71, 69, 72, 76, 73}), output = dailyTemperatures(arr);
    for (auto el : output)
        cout << el << " ";
    cout << endl;
    return 0;
}