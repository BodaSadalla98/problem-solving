#include <bits/stdc++.h>
#include <cstdio>

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
  vector<int> v;
  int n;
  cin >> n;
  v.resize(n + 1);
  for (int i = 0; i < n; ++i)
    cin >> v[i];

  int cnt = 0;
  v.push_back(INF);
  vector<vector<int>> ans(n);

  for (int i = 0; i < n; i++) {
    if (v[i] == 1) {

      if (i > 0 && v[i - 1] < v[i + 1]) {
        ans[cnt - 1].push_back(1);

      }

      else {
        ans[cnt].push_back(1);
        ans[cnt].push_back(v[i + 1]);
        ++i;
        cnt++;
      }
    }

    else {
      ans[cnt++].push_back(v[i]);
    }
  }
  cout<<ans.size()<<endl;

  for (int i = 0; i < ans.size(); ++i) {
    for (int j = 0; j < ans[i].size(); ++j) {

      cout << ans[i][j] << ' ';
    }
    cout<<endl;

    if (i< ans.size()-1)
      cout << "/ ";
  }
}
