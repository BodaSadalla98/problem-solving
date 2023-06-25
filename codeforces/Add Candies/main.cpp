#include "bits/stdc++.h"
#include <iostream>
#include <vector>
using namespace std;

map<int, int> mp;
multiset<pair<int, int>> s;
long long csm[200001];
int main() {
  int tt;
  cin >> tt;
  while (tt--) {

    csm[0] = 0;
    int n;
    long long w;
    cin >> n >> w;
    long long thresold = (w + 1) / 2;
    int flag = 0;
    vector<pair<long long, int>> v(n + 1);
    for (int i = 1; i <= n; ++i) {
      int t;
      cin >> t;
      v[i] = {t, i};
      if (t >= thresold && t < w)
        flag = i;
      // mp[i] = v[i];
      // s.insert({v[i],i});
    }
    vector<int> vi(5);
    vi.clear();

    if (flag) {
      cout << 1 << endl;
      cout << flag << endl;
    }

    else {
      sort(v.begin(), v.end());
      int ans = -1;
      for (int i = 1; i <= n; ++i) {
        csm[i] = csm[i - 1] + v[i].first;
        if (csm[i] >= thresold && csm[i] <= w) {
          ans = i;
          break;
        }
      }
      /**
                    int L=1,R=n;
                    int mid;

                    while(L<=R){
                          mid = (L+R)/2;

                          if(csm[mid] <= w && csm[mid] >= thresold)
                              break;
                          else if (csm[mid] > w)
                              R = mid-1;

                          else
                              L = mid+1;
                    }
                    if(R == 0 || L >n)
                      mid = -1;

                      **/
      cout << ans << endl;
      for (int i = 1; i <= ans; i++) {

        cout << v[i].second << ' ';
      }
      cout << endl;
    }
  }
  return 0;
}
