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

  int n;
  cin >> n;
  int mi_team = INF;
  int mi_problem = INF;
  for (int i = 0, a; i < n; i++) {
    cin >> a;
    mi_team = min(mi_team, a);
  }

  for (int i = 0, a; i < 10; i++) {
    cin >> a;
    mi_problem = min(mi_problem, a);
  }

  if (mi_team >= mi_problem)
    cout << 10;
  else
    cout << mi_team;
}
