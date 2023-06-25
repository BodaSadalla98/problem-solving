#include <bits/stdc++.h>
#include <cstring>
#include <ctime>
#include <sys/wait.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

vector<int> v[MAX_N];
int cost[MAX_N];

void bfs(int u) {

  memset(cost, -1, sizeof cost);
  queue<int> q;
  q.push(u);
  cost[u] = 0;

  while (q.size()) {

    int cur = q.front();
    q.pop();

    for (int i = 0; i < (int)v[cur].size(); ++i) {
      int c = v[cur][i];
      if (cost[c] != -1)
        continue;

      cost[c] = cost[cur] + 1;
      q.push(c);
    }
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m, a, b;
  cin >> n >> m;
  for (int i = 0; i < m; ++i) {
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }

  bfs(1);
  cout << cost[4];
}
