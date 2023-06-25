#include <iostream>
#include <stdio.h>
#include <string>
#include <memory.h>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <time.h>
#include <assert.h>
#include <cmath>
#include <stack>
#include <string.h>
#include <sstream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll calc(ll n) {
	if (n == 0)
		return 0;
	for (ll d = 2; d*d <= n; ++d)
		if (n%d == 0)
			return n/d + calc(n%d);
	return 1;
}
int main()
{
	ll n;
	cin >> n;
	cout << calc(n) << endl;
	return 0;
}
