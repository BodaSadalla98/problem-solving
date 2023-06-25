#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int n,x;

int dp[1000005],c[105];

int calc( int sum){
    if(sum == x)
        return 0;


    int &ret = dp[sum];

    if(ret != -1)
        return ret;

    ret = 1e9;
    for(int i=0;i<n;++i){
        if(sum + c[i]  <= x)
        ret = min(ret, 1+ calc(sum + c[i]));

    }

    return ret;


}
int main()
{
    cin>>n>>x;
    for(int i=0;i<n;++i)
        cin>>c[i];
    for(int i=0;i<=1000000;++i)
        dp[i] = 1e9;
    //memset(dp, 1e9 , sizeof dp);

 //   int ans = calc(0);
 dp[x]=0;
 for(int i=x-1;i>=0;--i){
        for(int j=0;j<n;++j){
            if(i+c[j]<=x){
                dp[i] = min(dp[i], 1 + dp[i+c[j]]);

            }


        }




 }


int  ans = dp[0];
    if(ans == 1e9 )
        cout<<-1;
    else
        cout<<ans;

    return 0;
}
