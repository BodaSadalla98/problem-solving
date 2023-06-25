#include <iostream>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int ans=0;
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
int arr[3]={3,5,7};
//for(int j=2;j<=1000;j++){
int n;
ans=0;
//n=j;
cin>>n;
my_primes((int)sqrt(n));

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





        cout<<ans<<'\n';

//}
    return 0;
}
