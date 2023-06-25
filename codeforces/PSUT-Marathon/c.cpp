#include <bits/stdc++.h>
#include <type_traits>
#include <vector>

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

  int n;
  cin >> n;
  if (n < 5) {
    cout << -1;
    return 0;
  }
  int a[3 * MAX_N];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  vector<int> ans;
  for (int j = 0; j < 2; j++)
    for (int i = 0; i < n; i++) {
      if (i % 2 == 0 && !j)
        ans.push_back(a[i]);

      if (i % 2 && j)
        ans.push_back(a[i]);
    }
  if (!(n % 2))
    swap(ans[n - 1], ans[n - 2]);

  for (auto i = 0; i < n; i++)
    cout << ans[i] << ' ';

  return 0;
}
