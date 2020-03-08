#include <bits/stdc++.h>

using namespace std;

void minBrirbe(vector<int> arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i != arr.size() - 1 && (arr[i + 1] - arr[i] < -2))
        {
            cout << "Too chaotic" << endl;
            return;
        }
        else if (arr[i] > arr[i + 1])
        {
            int temp = arr[i] - arr[i + 1];
            count += temp;
            while (temp > 0)
            {
                swap(arr[i], arr[i + temp]);
                temp--;
            }
            // count += arr[i] - i + 1;
            // arr[i] = i + 1;
        }
    }

    cout << endl;
    cout << ceil(count / 2) << endl;
}

int main()
{
    vector<int> arr;
    // 1,2,5,3,4,7,8,6

    /*=====Algo =====*/
    // traverse the array in reverse order!
    // check if arr[i] == i+1 // shows its correct position
    // if not then check  i-1 != 0 and arr[i-1] == i+1
    // if this is true swap prev and curr element
    // else if i-2 !=0 and arr[i-2] == i+1 // two time bribe is given
    // swap two elements
    // else return "Too chaotic"
    /*done and dusted*/

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(6);

    minBrirbe(arr);
    return 0;
}
