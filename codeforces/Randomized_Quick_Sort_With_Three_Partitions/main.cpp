#include <iostream>
#include <vector>
#include <cstdlib>
#include<bits/stdc++.h>
using std::vector;
using std::swap;
using namespace std;
pair<int,int> partition2(vector<long long > &a, int l, int r) {
  int x =  a[l];
    int y = a[r];
  int j = l;
    int k =r;
  for (int i = l +1 ;i <r; i++) {
    if (a[i] <= x) {
      j++;
      swap(a[i], a[j]);
    }

  }


     for (int i = r-1    ;i >l; i--) {

        if(a[i]>=y){
            k--;
            swap(a[i],a[k]);

}

}
    swap(a[r],a[k]);
  swap(a[l], a[j]);
  return make_pair(j,k);
}

void randomized_quick_sort(vector<long long > &a, int l, int r) {
  if (l >= r) {
    return;
  }


  int k = l + rand() % (r - l + 1);
          int k2 = l + rand() % (r - l + 1);
        while(k==k2){
                k = l + rand() % (r - l + 1);
           k2 = l + rand() % (r - l + 1);
}

            if(a[k]<a[k2]){
  swap(a[l], a[k]);
        if(r-l!=1)
        swap(a[r], a[k2]);

}
else{

swap(a[l], a[k2]);
            if(r-l!=1)
        swap(a[r], a[k]);


}

  pair<int,int> m = partition2(a, l, r);


  randomized_quick_sort(a, l, m.first - 1);
  randomized_quick_sort(a, m.first + 1,m.second);
    randomized_quick_sort(a, m.second+1, r);
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);

vector<long long  > input;
input.resize(n);
for(int i=0;i<n;i++){
     long long  k2 = 0 + rand() % (1000000000000 -1);
        input[i]=k2;
        cout<<k2<<' ' ;
}
 randomized_quick_sort(input, 0,n-1);
cout<<"\n\n\n\n";
for(int i=0;i<n;i++){cout<<input[i]<<' ';}


/**

  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  randomized_quick_sort(a, 0, a.size() - 1);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cout << a[i] << ' ';
  }
**/

}
