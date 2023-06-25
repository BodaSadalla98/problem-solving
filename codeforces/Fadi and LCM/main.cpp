#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x; cin>>x;
    long long a,b;

    for(long long  i=1;i*i <= x;i++){

        if(x % i ==0){

                long long lcm =( i * (x/i) ) / __gcd(i, x/i) ;
        if( lcm==x) a = i,b=x/i;
        }
    }

    cout << a<<' '<<b<< endl;
    return 0;
}
