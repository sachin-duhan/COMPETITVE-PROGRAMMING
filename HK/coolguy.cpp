#include <algorithm>
#include <iostream>
#include <set>
#include <utility>
#include <vector>

int main(void)
{
  int n;
  if (!(std::cin >> n) || n < 1 || n > 200000)
  {
    return 1;
  }
  std::vector<std::pair<int, int>> a(n);
  for (int i = 0; i < n; i++)
  {
    int a_i;
    if (!(std::cin >> a_i))
    {
      return 1;
    }
    a[i] = std::make_pair(a_i, i);
  }
  std::sort(a.begin(), a.end());
  std::set<int> endpoints = {-1, n};
  int sum1 = n;
  int sum2 = n * n;
  int sum3 = n * n * n;
  int sum4 = n * n * n * n;
  int previous_count = (n + 2) * (n + 1) * n * (n - 1) / 24;
  int answer = 0;
  for (const auto &p : a)
  {
    const int a_i = p.first;
    const int i = p.second;
    const auto it = endpoints.insert(i).first;
    auto left = it;
    --left;
    auto right = it;
    ++right;
    const int minus = *right - (*left + 1);
    sum1 -= minus;
    sum2 -= minus * minus;
    sum3 -= minus * minus * minus;
    sum4 -= minus * minus * minus * minus;
    const int plus_left = *right - (i + 1);
    sum1 += plus_left;
    sum2 += plus_left * plus_left;
    sum3 += plus_left * plus_left * plus_left;
    sum4 += plus_left * plus_left * plus_left * plus_left;
    const int plus_right = i - (*left + 1);
    sum1 += plus_right;
    sum2 += plus_right * plus_right;
    sum3 += plus_right * plus_right * plus_right;
    sum4 += plus_right * plus_right * plus_right * plus_right;
    const int count =
        ((sum2 + sum1) * (sum2 + sum1) - (sum4 + 2 * sum3 + sum2)) / 8 +
        (sum4 + 2 * sum3 - sum2 - 2 * sum1) / 24;
    answer += (previous_count - count) * a_i;
    previous_count = count;
  }
  std::cout << answer << '\n';
  return 0;
}