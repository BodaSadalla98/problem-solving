#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int sq;
int div(int num){
    for(int i = num-1; i>= sqrt(num);--i)
        if(num%i ==0)
            return i;


}

bool prime(int n){
    for(int i=2;i*i<=n;++i)
        if(n%i==0)
            return 0;

    return 1;


}

int main()
{
   int tt;cin>>tt;

   while(tt--){
        int ans = 0;
        int n ; cin>>n;
        sq = sqrt(n);

        while(n>1){
            if(prime(n)){
                ans++;
                n-=1;
            }
            else
            {
                n = n / div(n);
                ans++;

            }



        }


        /**
            if(n == 2 )
                ans = 1;
            else if (n ==1)
                ans = 0;
            else if (n ==3)
                ans  = 2;
            else if (n%2)
                ans = 3;
            else
                ans = 2;
                **/
            cout<<ans<<endl;




   }
    return 0;
}
