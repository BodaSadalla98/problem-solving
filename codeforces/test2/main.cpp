#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;

#define ft first
#define sd second

int main() {
	int n, r;
	cin >> n >> r;

	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int cur = 0;
	int res = 0;

	while (cur != n) {
		int found = -1;

		for (int i = max(0, cur - r + 1); i <= min(n - 1, cur + r - 1); i++) {
			if (a[i] == 1) {
				found = i;
			}
		}

		if (found == -1) {
			cout << -1;
			return 0;
		}

		res++;
		cur = min(n, found + r);
	}

	cout << res;

	return 0;
}
