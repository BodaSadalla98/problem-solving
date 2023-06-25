#include <iostream>
#include"bits/stdc++.h"

using namespace std;

int main()
{
        int n,k;cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];

        long long ans1=0,ans2=1;


     //   if(n == k )ans2=1;
        for(int i=0;i<k;i++)
                ans1+= n-i;

        int last = -1;

        for(int i=0;i<n;i++){

            if(v[i]> n-k){
                if(last == -1)
                {
                    last = i;
                    continue;
                }
                long long  temp = i-last -1;
                if(temp !=0){
                        //if(temp ==1)  ans2 = (ans2 * 2 )%998244353;
                     //   else
                        //ans2 =  ( ans2 * ((  (long long) (temp+1)* temp  / 2) )%998244353 ) % 998244353 ;
                        ans2 = ans2* (temp+1) % 998244353;
                }


                last = i;

            }

        }


        printf("%lld %lld", ans1,ans2);
    return 0;
}
