#include <bits/stdc++.h>
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

  int tt;
  cin >> tt;
  while (tt--) {

    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == j)
          v[i][j] = 1;
        else
          v[i][j] = 0;
      }
    }
    for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--)
      v[i][j] = 1;

    if (n % 2) {
      int t = n / 2;
      v[t][t + 1] = v[t + 1][t] = 1;
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cout << v[i][j] << ' ';
      }
      cout << endl;
    }
  }
}
