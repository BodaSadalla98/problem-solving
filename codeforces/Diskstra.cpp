#include <bits/stdc++.h>
#include <queue>
#include <sys/types.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

int n, m;
ll cost[MAX_N];
vector<vector<pair<int, int>>> v;

void dij() {
  vector<int> ans;
  ans.push(1);
  for (int i = 0; i < MAX_N; ++i)
    cost[i] = LINF;
  priority_queue<pair<ll, int>> q;
  q.push({0, 0});
  cost[0] = 0;
  while (!q.empty()) {
    ll cst = -q.top().first;
    int u = q.top().second;
    q.pop();
    if (cost[u] < cst)
      continue;

    if (u == (n - 1)) {
      if (cost[n - 1] == LINF)
        cout << -1;
      else
        for (auto i : ans)
          cout << i << ' ';
      return;
    }

    for (int i = 0; i < v[u].size(); i++) {
      int cur = v[u][i].first, c = v[u][i].second;

      if (cost[cur] > c + cst) {
        cost[cur] = c + cst;
        q.push({-cost[cur], cur});
      }
    }
  }
  if (cost[n - 1] == 1e18)
    cout << -1 << endl;
  else
    cout << cost[n - 1];
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> m;
  v.resize(n + 1);
  for (int i = 0, a, b, c; i < m; i++) {
    scanf("%d%d%d", &a, &b, &c);
    --a;
    --b;
    v[a].push_back({b, c});
    v[b].push_back({a, c});
  }

  dij();
}
