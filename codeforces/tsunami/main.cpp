#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
set<long long >s;
  long long a;cin>>a;

 int n1, n2, i, gcd, lcm;

   n1=a;

for(int j=1;j<=3*a;j++){
        n2=j;
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    lcm = (n1*n2)/(gcd) ;
    lcm /= j;
    s.insert(lcm);
            printf("The LCM of two numbers %d and %d is %d.\n", n1, n2, lcm);

}

 cout<< s.size();
    return 0;
}
