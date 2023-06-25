// ~/BAU/ACM-ICPC/Teams/A++/BlackBurn95
// ~/sudo apt-get Accpeted

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <memory.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int N = 100001;
int n, k;
ll ans, a[N], dp[N];
map < ll, int > f;

ll fastPow(ll b, ll p) {
	if (p == 0)
		return 1;
	if (p == 1)
		return b;

	if (p % 2 == 1) return b*pow(b, p-1);
	ll r = pow(b, p / 2);

	return r*r;
}

int main() {
	std::ios::sync_with_stdio(false);

#ifdef LOCAL
	freopen("input.in", "r", stdin);
#endif

	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%lld", a + i);
		dp[i] = (i>0 ? dp[i - 1] : 0) + a[i];

		if (f.find(dp[i]) == f.end()) f[dp[i]] = 1;
		else f[dp[i]]++;
	}

	ans = 0;

	for (int i = 0; i < n; i++) {
		ll pre = (i == 0 ? 0 : dp[i - 1]);
		ll pk = 0;
		for (int j = 0; j <= 47 && (abs(k)>1 || (j==0 || (j==1 && k==-1))) && pk<100000000000000ll; j++) {
			pk = fastPow(k, j);

			//cout << pk << " , " << pre << " , " << f[pk - pre] << endl;
			if (f.find(pk + pre) != f.end()) ans += f[pk + pre];
		}

		f[dp[i]]--;
	}

	printf("%lld\n", ans);

	return 0;
}
