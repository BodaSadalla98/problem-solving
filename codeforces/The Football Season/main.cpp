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

    if( (n*w) < p)can = 0;

    long long lcm = (w*d) / gcd(w,d);


    long long temp = p % lcm ;

    //cout<<temp <<endl;




     long long ptsw =  temp % w ;
      long long ptswin = p  - ptsw ;
            long long x ,y, z;
        x= ptswin/w , y = ptsw/d ; z = n- x - y;

      //      cout<<lcm <<endl ;

            if(ptsw % d != 0)can = 0;

       cout << (( x*w + y*d ) -  p  );


         if (can ==0) {
            puts("-1");
            return 0;
        }


   cout <<x<<' '<<y<<' '<<z << endl;
    return 0;
}
