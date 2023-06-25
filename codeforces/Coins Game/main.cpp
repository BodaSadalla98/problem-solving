#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int L,K,n;

int dp [100000001];
int a[3];

/**
bool calc(int coins, int last ){
                    int cur = (last ^ 1 );
                if (coins == 0 )return last ;



               int &ret = dp[coins][last];

               if(ret != -1) return ret;

                    ret  = cur;
        for(int i=0;i<3;i++){
                    bool can ;
                if( (coins - a[i] ) >=0)
                {


                    can =  calc(coins - a[i], cur   );

                    if(can  == cur) return ret = cur;

                }
        }


        return ret = last   ;








}
**/

int main()
{
    memset(dp, -1 ,sizeof dp);
    cin>>L>>K>>n;


    dp[0]= 0;dp[1] = dp[L] = dp[K] =1;
    for(int i=0;i<n; i++){
    int t;cin>>t;
    for(int j=2;j<=t;j++){
        int a,b,c, ans = 1;
        ans  &=  dp[j-1];

        if(j>= L) ans  &=  dp[j-L];
        if(j>= K) ans  &=  dp[j-K];

        dp[j] = (ans ^ 1 );


    }

        if(dp[t]== 1 )cout<<'A';
        else
                cout<<'B';
    }



    return 0;
}
