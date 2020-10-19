/*
TIME COMPLEXITY OVERVIEW
TIME - O(Nlog(N))
// NOTE - time can be reducted if we use the multiset in this case!! that will keep the values sorted by default!

SPACE 
    - for storing students - O(N)
    - for solution and implementation - O(1)
*/

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    long int n;
    cin >> n;
    vector<int> students(n);
    for (int i = 0; i < n; i++)
        cin >> students[i];
    sort(students.begin(), students.end());
    long int j = 0, tmp = 0, curr_count = 0, total_taxies = 0;
    for (int i = n - 1; i >= j; i--)
    {
        if (!curr_count)
            curr_count += students[i];
        if (curr_count == 4)
        {
            total_taxies++;
            j = tmp;
            curr_count = 0;
        }
        else if (curr_count > 4 || i == j)
        {
            total_taxies++;
            if (i == j)
                break;
            curr_count = 0;
            j = tmp - 1;
        }
        else
        {
            tmp = j;
            while (curr_count < 4 && tmp < i)
            {
                curr_count += students[tmp];
                tmp++;
            }
            if (i == tmp)
            {
                if (curr_count > 4)
                    total_taxies += 2;
                else
                    total_taxies++;
                break;
            }
            i++;
        }
    }
    cout << total_taxies << endl;
    return 0;
}