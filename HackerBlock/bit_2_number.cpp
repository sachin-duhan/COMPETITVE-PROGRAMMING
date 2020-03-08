#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, len, temp;
		cin >> n;
		temp = n;
		int ans = 0;
		while (temp > 0)
		{
			len++;
			temp /= 10;
		}
		for (int i = 0; i < len; i++)
		{
			ans += (n % 10) * pow(2, i);
			n /= 10;
		}
		cout << ans << endl;
	}
	return 0;
}
