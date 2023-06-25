#include <iostream>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
long long  ans=0;
vector<int> primes;


 void my_primes (int n ){

   for (int i=3; i<=n; i++)
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
                break;
            else if (j+1 > sqrt(i)) {
                primes.push_back(i);

            }

        }

}
bool  isPrime(long long  n)
{
    // Print the number of 2s that divide n

        int sqr= sqrt(n);
    for (int i = 2; i <=sqr;  ++i)
    {
        if (n%i ==0)return 0;
    }
        return 1;
}


int main()



{


long long n;
ans=0;
primes.push_back(3);
cin>>n;
    if (n%2==0)ans= n/2;
        else {
my_primes((int)sqrt(n));
   //for (int j=2; j<=10000; j++){
     //   ans=0;n=j;
   if (isPrime(n))ans=1;
        else {
            while (n>0){
                 if(n%2==0) {ans += n/2;n=0;break;}

                for(int i=0;i<primes.size();i++) {
                            int num = primes[i];
                if (n%num==0){ans++;n-=num;break;}
}






}


            }


   }

      //  cout<<j<<"is ";
       cout<<ans<<'\n';
//   }

    return 0;
}
