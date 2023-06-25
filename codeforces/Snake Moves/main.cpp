#include <bits/stdc++.h>
#include <math.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

int n;
string s;
bool vis[1001][101];
int sol(int idx, int x, int y) {

    if (vis[x][y])
        return idx-1;

  if (idx == n+1)
    return idx;

  vis[x][y] = 1;

  if (s[idx] == 'R')
    return sol(idx + 1, x + 1, y);

  else if (s[idx] == 'L')
    return sol(idx + 1, x - 1, y);
  if (s[idx] == 'U')
    return sol(idx + 1, x, y + 1);
  else if (s[idx] == 'D')
    return sol(idx + 1, x, y - 1);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> s;

  cout << sol(0, 0, 0);
}
