#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long  ans=0,n,k;
    cin>>n>>k;
    ans += ceil( (double)(n*2)/k);
    ans += ceil((double)(n*5)/k);
    ans += ceil((double)(n*8)/k);
    cout << ans << endl;
    return 0;
}
