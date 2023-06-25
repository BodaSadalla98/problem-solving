#include <iostream>
#include<bits/stdc++.h>

using namespace std;

long long gcd(long a, long long b){

    if(b ==0)return a;
    return gcd(b, a%b);


}


int main()
{
   long long n,p,w,d;
   cin>>n>>p>>w>>d;
bool    can = 1;



        for(long long  i=0; i<=w; i++){
                    long long x, y;

                    y= i;
                    x = ( p - (y*d) ) / w;
                    if( (x + y ) <= n &&  p == (x*w + y*d)&& x >=0  ){

                        printf("%lld %lld %lld", x ,y, n-x-y);
                        return 0;

                    }





        }


            puts("-1");
            return 0;



    return 0;
}
