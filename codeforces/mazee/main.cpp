#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

int n, m, k;
char g[501][501];
bool valid(int x, int y) {

        bool a;
      a =
      x >= 0
      && x < n
      && y < m
      && y >= 0;


      return a;


     }

int dx[4] = {1,-1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> m >> k;
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
      cin >> g[i][j];
    for(int w = 0;w<4;++w){
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j) {



      if (g[i][j] == '.' && k) {

        int cnt = 0;
        for (int x = 0; x < 4; ++x) {
          int newX = i + dx[x];
          int newY = j + dy[x];
          if (valid(newX, newY)) {
              if(g[newX][newY]=='.')
               {
            cnt++;
          }
          }
        }
        if (cnt < 2) {
          g[i][j] = 'X';
          k--;
        }
      }
    }
    }



  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cout << g[i][j];
    }
    cout << endl;
  }
}
