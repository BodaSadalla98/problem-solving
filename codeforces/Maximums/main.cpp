#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int main()
{
    int n;cin>>n;
    vector<long long > a(n+1),b(n+1);
    long long max_x = 0;
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    a[1] = b[1];
   // max_x = max(0,a1);
    for(int i=2; i<=n;i++){
        max_x = max(max_x, a[i-1]);
        a[i] = b[i] + max_x;


    }

    for(int i=1;i<=n;i++)printf("%lld ", a[i]);
    return 0;
}
