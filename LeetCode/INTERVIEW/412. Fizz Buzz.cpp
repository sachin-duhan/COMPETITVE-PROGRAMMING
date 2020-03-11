/*
Write a program that outputs the string representation of numbers from 1 to n.

But for multiples of three it should output “Fizz” instead of the number and for the multiples
 of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.

Example:

n = 15,

Return:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]

*/

#include <iostream>
#include <vector>
using namespace std;

vector<string> solve(int n)
{
    vector<string> ans(n, "");
    string fizz = "Fizz", buzz = "Buzz";
    for (int i = 1; i < n+1; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            ans[i-1] = fizz + buzz;
        else if (i % 3 == 0)
            ans[i-1] = fizz;
        else if (i % 5 == 0)
            ans[i-1] = buzz;
        else
            ans[i-1] = to_string(i);
    }
    return ans;
}

int main()
{
    int n = 15;
    vector<string> ans = solve(n);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
    return 0;
}