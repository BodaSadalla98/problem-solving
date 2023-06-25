#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main()
{
	int n;
	cin >> n;
	int ans = 1e9;
	v.resize(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	for (int i = 1; i <= n; ++i)
	{

					int temp = 0;
					for (int j = 1; j <= n; j++)
					{

					temp += 2 * v[j - 1] * ((i + j - 2) + abs(i - j));
					}

		ans = min(temp, ans);
	}

	cout << ans;
	return 0;
}
