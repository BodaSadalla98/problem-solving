#include <iostream>
#include<bits/stdc++.h>

using namespace std;


long long  n;
long long  dp[100002], nxt[100001],last[100001],a[100005];
long long calc (long long  idx){
        if(idx ==n)return 0;

        long long   &ret= dp[idx];
        if(ret != -1)return ret;

        ret = calc(idx+1);


       if(nxt[idx] !=-1){
       //ret = max (ret , ( calc(nxt[a[idx]]) + ( (a[idx] == 999)? 3 : 1  ) ) );

        long long  b =   calc(nxt[idx])  +   (a[idx]==999 ? 3 : 1)   ;

         ret=max(ret, b );

       }



return ret;
}
int main()
{
   cin>>n;
    while(n!=0)
        {
                memset(dp,-1, sizeof dp);
    memset(last, -1 , sizeof last);
                for(int i=0;i<n;i++){
                    int t;cin>>t;
                    a[i]=t;

                }
                for(int i=n-1;i>=0;i--){
                    nxt[i] = last[a[i]];
                    last[a[i]] = i;


                }

              cout<<  calc(0)<<endl;




        cin>>n;


    }

    return 0;
}
