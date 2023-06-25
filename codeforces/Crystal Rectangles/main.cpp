#include <iostream>
#include<bits/stdc++.h>

long long  dp [1000005] ;
int n,m,k;
int MOD = 1e9 + 7 ;
using namespace std;


long long  calc (int index){
        if(index == k )return 1;
        if(index > k )return 0;

        long long  &ret = dp[index];

        if(ret != -1) return ret;



            //return dp[index] = (calc(index+2)*m+n*calc(index+1))%MOD;
        return ret = ( ( ( calc(index +1)   * n )  % MOD  ) +  ( (calc(index +2)  * m  )% MOD) ) % MOD;




}

int main()
{

    cin>>n>>m>>k;
    memset(dp , -1, sizeof dp);

        dp[0] = 1; dp[1]  = n;

        for(int i=2; i <= k;i++){
            dp [i] = (dp[i-1] * n  + dp[i-2] * m )%MOD;

        }
    cout << dp[k] << endl;
    return 0;
}
