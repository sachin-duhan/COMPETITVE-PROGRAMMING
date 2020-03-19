#include <iostream>
#include <vector>

using namespace std;

vector<int> findDisappearedNumbers(vector<int> &given)
{
    int n = given.size();
    vector<int> solution(n);
    for (int i = 0; i < n; i++)
        solution[given[i] - 1] = 1;

    int size = 0;
    for (int i = 0; i < n; i++)
        if (solution[i] == -1)
        {
            solution[size] = i + 1;
            size++;
        }
    solution.resize(size);
    return solution;
}

int main()
{
    vector<int> given({4, 3, 2, 7, 8, 2, 3, 1}), solution = findDisappearedNumbers(given);
    for (int i = 0; i < solution.size(); i++)
        cout << solution[i] << " ";
    return 0;
}