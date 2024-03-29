#include <iostream>
#include <vector>
#include <cstdlib>
#include<bits/stdc++.h>
using namespace std;
using std::vector;
using std::swap;

int partition2(vector<int> &a, int l, int r) {
  int x = a[l];
  int j = l;
  for (int i = l + 1; i <= r; i++) {
    if (a[i] <= x) {
      j++;
      swap(a[i], a[j]);
    }
  }
  swap(a[l], a[j]);
  return j;
}

void randomized_quick_sort(vector<int> &a, int l, int r) {
  if (l >= r) {
    return;
  }
int m = (l+r)/2;
            int pivot_index;
    int pivot = min(a[r],a[l]);
        pivot= min(pivot,a[m]);
            if (pivot==a[l])pivot_index=l;
            else if (pivot==a[r])pivot_index=r;
            else
                     pivot_index=m;
 // int k = l + rand() % (r - l + 1);
  swap(a[l], a[pivot_index]);
  int mm = partition2(a, l, r);

  randomized_quick_sort(a, l, mm - 1);
  randomized_quick_sort(a, mm + 1, r);
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  randomized_quick_sort(a, 0, a.size() - 1);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cout << a[i] << ' ';
  }
}
