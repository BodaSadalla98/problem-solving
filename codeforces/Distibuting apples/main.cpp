#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

// ans = n+m-1 C n-1
int n, m;
long long fact[2000006];

long long p(int n, int pw) {
  if (pw == 0)
    return 1;
  long long temp = p(n, pw / 2);

  temp = (temp * temp) % MOD;

  if (pw % 2)
    temp = (temp * n) % MOD;

  return temp;
}
int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> m;
  fact[1] = fact[0]=1;
  for (int i = 2; i < n + m; ++i) {

    fact[i] =  ((long long)(fact[i - 1] * i) ) % MOD;
  }
  cout << fact[n + m - 1] * (p( ( (long long)(fact[m] * fact[n - 1])  %  MOD ), MOD - 2)) % MOD;

  return 0;
}
