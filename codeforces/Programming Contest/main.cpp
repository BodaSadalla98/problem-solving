#include <iostream>
#include"bits/stdc++.h"

using namespace std;
int n, T,a[41];

int calc(int idx, long long s ){
    if(idx == n)
        return 0;
    int x = -1;
    if(s + a[idx] <= T)
        x =  a[idx] + calc(idx+1, s + a[idx]);
    x= max(x, calc(idx+1, s));

    return x;

}
int main()
{
    cin>>n>>T;
    for(int i=0;i<n;++i)
        cin>>a[i];

    sort(a, a+n);
    reverse(a,a+n);

    cout << calc(0,0) << endl;
    return 0;
}
