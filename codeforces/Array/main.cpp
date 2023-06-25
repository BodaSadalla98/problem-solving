#include <iostream>
#include"bits/stdc++.h";
using namespace std;
int n;
const int MOD = 1e9+7;

long long f(int n){
if(n==1 || !n)
    return 1;
return (n* f(n-1))%MOD ;

}

long long p (long long a, int po){
    if(po ==0)
        return 1;
    long long t = p(a, po/2);

    t = (t*t)%MOD;
    if(po%2)
        t = (t*a)%MOD;

        return t;
}
int main()
{
        long long ans;
        cin>>n;

    ans =  (((f(2*n-1) *p(f(n), MOD-2 ))%MOD * p(f(n-1),MOD-2) ) % MOD  * 2 )%MOD - n;
    cout<<ans;
    return 0;
}
