#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int sum = 0;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
      int t;
      cin >> t;
      sum += t;
    }

    if (m == sum)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
