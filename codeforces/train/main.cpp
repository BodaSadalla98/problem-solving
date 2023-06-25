#include <iostream>
#include<bits/stdc++.h>
#include<chrono>
using namespace std;

void a(vector <int > *arr, int n){
for (auto i=0; i<n;i++) (*arr)[i]= 10;

}
int main()
{
    auto start = chrono :: steady_clock :: now();
    vector <int> arr = {1,2,3,4};
     a(&arr,4);
    for(auto i : arr) cout <<i<<' ';

auto ende =   chrono :: steady_clock:: now();
  auto diff = ende- start;

       // cout<< chrono ::duration<double, milli>(diff).count() <<" ms ";

    return 0;
}
