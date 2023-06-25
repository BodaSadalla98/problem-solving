#include <iostream>
#include"bits/stdc++.h";

using namespace std;
const long long  MOD = 1e9+7;

long long p (long long a, long long po){
    if(po ==0)
        return 1;
    long long t = p(a, po/2);

    t = (t*t)%MOD;
    if(po%2)
        t = (t*a)%MOD;

        return t;
}
/**
long long f(int n){
if(n==1 || !n)
    return 1;
return (n* f(n-1))%MOD ;

}
**/
long long f[200009], inv[200009];

long long ncr (long long n, long long r){

    return  (  (  (( f[n] * inv[r] ) % MOD)  * inv[n-r] ) % MOD) ;
}
int main()
{
    ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    f[0] = 1;
    inv[0] = p(1,MOD-2);

    for(int i=1;i<200009;++i){
        f[i] = (f[i-1]*i)%MOD ;
        inv[i] = p(f[i],MOD-2);
        }
    int tt;cin>>tt;
    while(tt--){
        string s; cin>>s;
        int n = (int)s.size();
        long long  one=0,zero=0;
        long long subseq = p(2,n)-1;
        long long ans1,ans2,ans;
        for(int i=0;i<n;i++){
            if(s[i]=='0')
                zero++;
            else
                one++;
        }

        ans1 = ans2=0;
        for(int i=1;i<=one;i+=2){
            ans1=  (ans1 + ncr(one,i) ) %MOD;

        }
         for(int i=1;i<=zero;i+=2){
            ans2=  (ans2 + ncr(zero,i) ) %MOD;

        }


        ans = (ans1*ans2) %MOD;

        cout << ( (subseq - ans)+MOD )%MOD <<endl;
    }

    return 0;
}
